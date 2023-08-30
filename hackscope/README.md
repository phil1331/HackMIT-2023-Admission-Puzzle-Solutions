# Hackscope – exploiting a JKU prefix whitelist JWT/SSRF authentication bypass vulnerability
## First glance
![hackscope](./../images/hackscope.png)
![hackscope_login](./../images/hackscope_login.png)
![hackscope_first_glance](./../images/hackscope_first_glance.png)
We can already guess what this might be about by just having a closer look at the dashboard. Seems to be an interesting puzzle.
## First thoughts
Let's first check out the final exam.
![final_exam](./../images/final_exam.png)
You can think about the first two questions, they are quite fun. Their answers are actually located in the source code, but when you search for the answer of the third weird question "What's my favorite string?", you won't find anything except an error message that appears when you messed something up on the frontend. So that won't get you anywhere. We can try the step of sending arbitrary input to the application again to help us examine how it works. </br> 
![graded_hackscope](./../images/graded_hackscope.png) </br> 
But the only thing that happens is that the input gets locally saved in a cache and the exam appears at graded with zero points for each question. Malformed input also didn't lead to anything meaningful to happen. That's when you might start having a look at outgoing requests and notice a, for us, interesting endpoint that is being GET-requested at each access to the final exam page, `/auth`. When submitting additionally the `/scores` endpoint is being accessed by a POST-Request with all of our question's contents and a response containing the respective points we reached for each question.
## First steps

You can try to intercept the requests with [burp](https://portswigger.net/burp), an application with which most penetration tests start by intercepting requests and responses between our computer and the host we want to reach. 

<details>
<summary>Details</summary>

The service that conducts this "request deviation"/interception is called proxy. Burp configures the proxy server for us and afterwards we just have to specify the domain name (at most times `localhost`/`127.0.0.1`/`[::1]`) and the port, either in our system wide proxy configuration or in the browser specific configuration (or just use the burp built-in browser where everything, including HTTPS support, is already configured for us). I recommend checking the Burp Suite website out for more, detailed information. Following operations are useful for this Write-Up:
```
First step:
Configure Proxy data in your browser
Intercept Request:
Proxy > Intercept is Off
Intercept Response:
Proxy > {Choose your request; Intercept has to be turned on} > Right Click > Do Intercept > Response To This Request
```
</details> </br>

Let's just try intercepting the auth and scores request's responses and see whether we can just modify them to get us to the point where we want to get. We already know, because the answer to the third question isn't on the frontend that this probably won't get us anywhere either, but let's try it for fun.</br>
Request: </br>
// add request image </br>
Response: </br>
![intercept_response_admin1](./../images/intercept_response_admin1.png)</br>
JSON is returned, let's modify the admin value to be true. </br>
![newendpoint](./../images/newendpoint.png) </br>
Interesting, we discovered a new endpoint that got just called if the previous response evaluated to being `true` for the `admin` JSON object! At this point, you probably had already made this discovery in the frontend source code, but let's keep doing the response-interception-modification thing. The request to the `/answers` API yields following body:
```json
{"admin":false,"message":"You're not an admin\u2014no flag for you!"}
```
At least we know now where we can start to get the flag. We can modify this `admin` JSON-object again to `true` and we get an interesting result on the frontend. </br>
![page_after_admin](./../images/page_after_admin.png) </br>
As we expected, just the answers to the first two questions are contained on the frontend and the answer to the third question, judging by upper requests, is the flag itself which we get when the backend accepts us as being an admin. Furthermore, we can conclude that we don't have to manually use the `/answers` API as the frontend functionality does that for us if we provide the necessary credentials. Wait, but how do we actually authenticate ourselves and confirm our identity? Notice that in each request, an `Authorization` header is included with a `Bearer` token. A `Bearer` specification indicates that the token we send is accepted from whomever, whatever or whereever it gets sent as long as the token includes the necessary information to authenticate someone. The token that follows the `Bearer` specification is included in our cookies. Here, cookies are used to keep track of the respective user, so the server can tell who is who. Let's just take a look and try to replace the cookies with something that might authenticate us as being admin.
```
access_token eyJhbGciOiJSUzI1NiIsImprdSI6Imh0dHA6Ly8xMjcuMC4wLjE6NDAwMC8ud2VsbC1rbm93bi9qd2tzLmpzb24iLCJraWQiOiJlblFBWmN4S3Q4bFVTZ0lVMnlmY0NGVldncE9OQ3dvcTdlUHNxWWdmaDdZIn0.eyJleHAiOjE2OTMzODU4MjEsImlhdCI6MTY5MzM4MjIyMSwicm9sZSI6InVzZXIiLCJzdWIiOiJndWVzdF85MjNfMmY2ZmZiIn0.W3zLpbIyfuALFdYzJBsnZY2vQN5oMPismgdRxbMP1oTF1GsYTCn6Qbzq3ioiMyWpI5Dc6TFi3Z6_Nt15HmC3KErZAhq7J5AfC2M-11wRNnT3xT0swXJ2JZHqXAZ4mSagA7W_5hGWpBO_OlDS3GxB4yNT_isNc7pWRIQYjajD8Mt_5E7xw55-6zxJ6KJJvBB_WqWgX8UXusmW5gFEWEkQ5RS5L7eLT2ti6bTu3wydJ8fFjCD2gQ-RTHOa9hKTxXiA9StIrUbScjGqvBQpjlvLKFZzBHgd9Dykd8No73Gqrgml4yh_rvOBUUJp6erx1q-8V_J01JLeX3HO1sI_7f07mA

session
eyJ1c2VybmFtZSI6Imd1ZXN0XzkyM18yZjZmZmIifQ.ZO72TQ.NihPVKqIoiRw1yJEQ6NCo9JQGF4
```
At this point you might just so some research what token is depicting what, or you just might immediately see that the `access_token` is clearly a [JSON Web Token (JWT)](https://de.wikipedia.org/wiki/JSON_Web_Token) (Remember the name of the first instructor, `Jason Webber`), or even that the `session` token is a Flask session ID. Noticing the latter is unnecessary and will just get you into trouble trying to crack the secured character sequence with which the signature of the flask session token got encrypted with tools such as [flask-unsign](https://github.com/Paradoxis/Flask-Unsign) (I speak of experience). During your research you will hear quite soon about a website called [jwt.io](https://jwt.io/) where you can deal with JWT's, get some information about and even modify or validate them. When just pasting our JWT (Try it out) we get following information:
![jwt_decoded](./../images/jwt_decoded.png)
So we just have to modify the role to be admin and we should be good to go, right? Well, no. Let's take a look at why that is the case.
<details><summary>Base64</summary>

Base64 is an encoding that encodes arbitrary data into a sequence of alphanumerical characters and 3 special characters and thus making it possible to represent binary data without using binary data. It is commonly used to transfer not just binary data but most data across the internet. [Read more](https://en.wikipedia.org/wiki/Base64)</details> </br>

```
JWT (common) structure:

{Base64Header}.{Base64Body}.{Base64Signature}

Base64Header stores information about the jwt and encryption information, such as the algorithm or the JSON Web Key Set URL (JKU) which contains public keys to validate the JWT.
Base64Body stores application specific information, common keys are for example `sub` -> application-username, `exp` -> expiring date of the token or `iat` -> date when the token was issued
Base64Signature is the base64 encoded version of the, with the encryption algorithm determined in the header, encrypted header and body of the JWT.

Important:
The signature gets encrypted with a private key that is just known to the server. No one else should be able to encrypt the token.
The JWT / signature gets validated with a public key that is directly related to the private key.
The server stores for each user the private key and accesses the public keys elsewhere. At most times they are, well, public. They can be stored for each user in a JSON file (called JSON Web Key Set (JWKS)) and are identified by their public modulus and exponent (which are called `n` and `e` in the jwks, respectively). This JSON file is often directly referenced in the header of our JWT through the aforementioned JKU, our public key identifiers can directly be accessed through the specified kid (key identifier).
```
That means that we cannot modify the JSON-Web-Token, as we would need the private key to encrypt header and payload for it to get correctly validated by our public key. In the JKU JSON file, we find 3 entries, perhaps for us, and the two other respective organizers. As we know now, knowing the public key of others isn't a vulnerability. That's why we cannot use this as valuable information. You will be able to find the JWKS [here](./code/jwks.json). So we need another way. There are numerous exploits for JWT's to try out there, for example Null-Algorithms, Null-Signatures, or [CVE-2016-10555](https://nvd.nist.gov/vuln/detail/CVE-2016-10555). You can take a look at [Hacktricks' collection](https://book.hacktricks.xyz/pentesting-web/hacking-jwt-json-web-tokens). But what you will see is that none of the above work. Now, let's do some considerations.
### Plan

The `jwks.json` file contains the key components of public keys and we cannot do any modifications to our key without knowing the private key. What if we were to generate our own RS256 pair of keys, encrypt our header and body to be a new signature with jwt.io and try to modify the jku header parameter to point to our own public keys anywhere on the internet ([SSRF](https://portswigger.net/web-security/ssrf))? Sounds like a plan, doesn't it? </br>
## Implementation
We can generate a private and public key by entering following commands in that order:
```bash
openssl genrsa -out ./private.key
openssl rsa -in ./private.key -pubout -outform PEM -out ./public.key
```
The `-outform PEM` parameter is important as jwt.io just accepts keys in the PEM-Format. You'll find the private key [here](./code/private.key), and the public key [here](./code/public.key). We can just paste both of those keys into their text areas on jwt.io with our jwt token being active. It should look like this now: </br>
![jwt_custom_pair](./../images/jwt_custom_pair.png) </br>
Now we can modify the URL to our liking. Let's try entering something to see whether some kind of validation of the JKU parameter is going on, on the backend. We can just use the `/auth` endpoint for that purpose and repeat requests with a modified `Authorization: Bearer {TOKEN}` header value. Let's just set the jku parameter to be http://example.com:80 and see what happens... </br>
Response body:
```json
{"message":"JKU specified not allowed; wrong prefix."}
```
Oh, no.. Indeed, the JKU is being validated on the server side. But, what is that? `[...]wrong prefix."` It's just prefix validation! After we experiment a little more when those error messages appear and try to mess with the backend a little bit, we'll know quite fast that the mandatory prefix is `http://127.0.0.1:4000/.well-known/jwks.json`. So we are just able to append characters to this URL, in any other case we will get a response containing the upper error. I tried a couple of things such as exploiting possible different encoding treatments, the deepest URL-Format specifications to change the domain name and suspected possible different URL encoding mechanisms because the JKU would be treated differentely by different libraries, tried special character usage, (Buffer Overflow and SQL injection exploits too even though I knew it wouldn't make much sense here), many whitelist bypassing exploits and was about to desperately try DNS-Rebinding because I noticed a nginx Reverse Proxy by using spidering when I took a look at the source code again.. If you have seen my [entrance puzzle](./../entrance_puzzle/) write-up, there is a thing I called `ambiguous state of continuation`. I was in this ambiguous state and knew that I missed something obvious anywhere. </br>
![update_flask](./../images/update_flask.png) </br>
I had already checked this comment at the start of my test and didn't find any useful information about the APIFlask documentation. This `TODO` comment was in contrary to the comment in the [bakery](./../bakery/) challenge genuinely formatted, so I assumed it wasn't related to the challenge. I was probably being too hasty, but when I checked again what the "APIFlask documentation" might mean I got multiple results that returned recommendations to visit the flask-ubiquitous `/docs` endpoint. I still don't know how I missed it and how my long spidering process missed it, too. I mean, come on, 4 letters?

> **Important**
> If you are tackling or going to be tackling a challenge and find yourself at such an ambiguous state, **look for the obvious first**.
> Don't trust your tools.

Let's check out whether our discovery really exists. </br>
![hackscope_docs](./../images/hackscope_docs.png) </br>
Indeed. We can have a look onto the `/X` endpoint: </br>
![Xendpoint](./../images/Xendpoint.png) </br>
Scary :worried:. Below the admin panel we can see the `/load` API. The description says
```
To access external resources, pass in the desired path.
```
That's exactly what we need for our prefix whitelist authentication bypass! Though, when we try to access it with our browser we get an output of:
```
Endpoint cannot be called by external users
```
Remember though, that our JKU parameter prefix's domain name is localhost. That's not an external user. So, let's work on exploiting this. We can validate that we are doing it right by receiving the following error messages:
```json
// When the endpoint exists and contains valid json token but the token couldn't be validated:
{"message":"Token was not signed or formatted properly!"}
// When the endpoint doesn't exist:
{"message":"Token was not formatted properly!"}
```
We can try the load endpoint out by calling it through crafting a URL that back-path traverses the fixed prefix and provides the URL to the (real) `jwks.json` as an input to the `/load` API and pasting it as a JKU value into our JWT header and repeat the request again with burp. We get the first error message back, meaning the load endpoints works as we expected when executed locally. Good. Let's assemble our own jwks.json file with the public key that *we* created as determined in our [plan](#plan). We can write a basic java application to generate the public exponent and modulus in base64 for us. You'll be able to find it [here](./code/ConvertPEMPublicKeyToModulusAndExponent.java). </br>
Output:
```
Modulus / n (B64):
5b-3VP568uMQB_QBWArB4AY9mwDyUeSWopsvyTbA3Z0GspzRYzKXUHqW1Y6n8pm7z443fmB-Ug_mTFdTkCI_6OSuQgS_1i24mdeL0MovuFJhoUN4PDkQx5kqtQaTbFFnn37Gf6YzSZnQdQ1ByvR97k_f0i9k5iE09ytk-Wdhj-0kUQfW9NCtzaByQieNibnk50XK7ojEpi4L4g0H_c7pFN86R8lgx4F5nNew4q72XkaoiRBZAunZAPz19xvUDsi0BQyWx6tHvQSEbCN6aRFbniN_gT9goZQ4omxbYSDHhlsASi4teuC8I0dRiK-bJxYn41jXYDxlWpEfxW3UTaWjyQ==
Exponent / e (B64):
AQAB
```
Let's create our own `jwks.json` where we just have to replace the n and e values of our old jwks.json with our new, own public modulus and exponent. The exponent is the same (`[1, 0, 1]` bytes or `"AQAB"` Base64-decoded), so we don't have to replace it. The new [jwks.json](./code/custom_jwks.json). Now we can either have our own server to upload our `jwks.json` to, use a service such as `transfer.sh` or do it my way. I just used the bakery challenge that offered file uploading and changed the extension of the JWKS file to `.png` (because in the end the extension doesn't matter for this puzzle). </br>
Let's wrap it up. We got our own Private-Public-Key-Pair. We use this key pair to modify the JWT to our liking. In the JWT, we modify
1. the JKU to be a URL that locally executes the `/load` API to access our own, crafted jwks that contains our public key details so that every token that we created with our private key gets validated correctly.
2. the role to be admin. 
3. (optionally) the expiration date.</br>
---
That's how we are able to abuse the SSRF vulnerability that arose through not masking the `/load` deprecated endpoint locally to which we got through the APIFlask documentation endpoint.
### Execution
We first visit the bakery challenge and just change our [custom_jwks.json](./code/custom_jwks.json) to be [custom_jwks.png](./code/custom_jwks.png). Then, we upload it to the bakery and copy the link of the location where the file was uploaded which is `https://bakery.hackxgpt.com/images/uploads/guest_923_3578698552c6.png`. We take this link and craft a URL for us to use as an alternative JKU, having the prefix validation in mind and therefore using back-path traversal (`/../../`).
```
Crafted Link:
http://127.0.0.1:4000/.well-known/jwks.json/../../load/https%3A%2F%2Fbakery.hackxgpt.com%2Fimages%2Fuploads%2Fguest_923_3578698552c6.png
```
We paste this link into our token on jwt.io where our private and public key along with the original token are already configured. It should look like this now: </br>
![ready_token_hackscope](./../images/ready_token_hackscope.png) </br>
Now we copy the JWT, paste it into the `Authorization: Bearer _PASTE_HERE` header and send the request. </br>
Request and response in burp: </br>
![burp_end_response](./../images/burp_end_response.png) </br>
Output:
```json
{"admin":true,"flag":"b4e2c607fdafe6a9ca6f6fb6d76948605b701513864c9195363e93908e3155ec"}
```
Nice, we made it! That's the flag you can submit to the command center for this puzzle. 
## Conclusion
We learned how to approach Web-App-Challenges, about burp and how to work with it on a basic level, authentication- and authorization-methods, JSON-Web-Tokens, its components and format, public and private keys and their relation to and job for JWT's, services such as transfer.sh, Base64, JWT authentication bypass exploits, proxies, SSRF and lastly about *patience*. If you like, you can visit the [next puzzle](./../vmhack/).