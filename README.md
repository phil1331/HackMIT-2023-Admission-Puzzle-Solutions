# HackMIT 2023 Admission Puzzle
## Introduction
HackMIT is an annual hackathon that takes place at Massachusetts Institute of Technology in Cambridge, Massachusetts in early fall. This year, 2023, one way to get automatically admitted was to solve a series of CTF-like admission puzzles and end up in the Top 50 of hackers. I managed to complete all of the puzzles and will try to assemble step-by-step approaches and solutions for people that want to have an understanding or a deeper understanding of that type of challenges in general and provide a complete walkthrough from the first time seeing the website to solving the last puzzle.
## Format
I will be presenting all the solutions in a specific format, which is supposed to represent a sped-up version of my train of thoughts while tackling the specific problem. There will be sections that dive in a little deeper, which can be skipped by pressing the [TL;DR](https://en.wikipedia.org/wiki/TL;DR) link. The problems that required code to be written additionally include a code branch.
<details>
<summary>Show Format</summary>

1. #### First glance
* The prompt, description, text or image that initiated the challenge.

2. #### First thoughts
* Here, I will explicate my intuition when I first faced the problem.

3. #### First steps
* Sometimes, the most difficult thing is to start. Here, I will show a way how to.

4. #### Implementation
* After those first steps, it should make sense or even seem simple. I will convert the previous thoughts and steps into a real program / apply them.

5. #### Conclusion
* I will briefly summarize what we have achieved and learnt.
</details>
</br>

> **Important**
> Note that I didn't specify any prerequisites. I will indeed try to make the approach clear, regardless of the person reading this.

> **Warning**
> While I will always explain every bit, I highly encourage you to do some <u>in-depth research</u> about and assemble projects within topics that were unknown to you before, as this is the only way to make what you have learnt long-term memorable.

## Challenges
![hackmit](images/hackmitwebsite.png)

The first interesting thing you will notice after having visited the endpoint is an interesting FAQ question which introduces the [entrance puzzle](/entrance_puzzle/). Solving this puzzle lead to an OpenAI themed command center which introduced following problems.

* [Gaslight](/bakery/) – Convincing an LLM
* [Xd](/Xd/) – Finding your way in a number cluster
* [Hackvm](/hackvm/) – RISC-V32 & x86_64 ELF Reversing (memcmp vulnerability)
* [Bakery](/bakery/) – Web-App file upload vulnerability
* [Hackscope](/hackscope/) – Web-App JWT authentication bypass
* [Vmhack](/vmhack/) – RISC-V32 & x86_64 ELF Reversing (self-generating code, z3)

> **Note**
> Even though I recommend walking through the problems in the order I provided them, this is not necessary as they all are independent from each other.
## References
HackMIT themselves made a [live-stream](https://www.youtube.com/watch?v=FxIAzJU4lYs) containing an overview of some official solutions. I really recommend checking it out.