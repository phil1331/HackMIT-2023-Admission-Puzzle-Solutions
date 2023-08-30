import java.security.KeyFactory;
import java.security.NoSuchAlgorithmException;
import java.security.interfaces.RSAPublicKey;
import java.security.spec.InvalidKeySpecException;
import java.security.spec.X509EncodedKeySpec;
import java.util.Arrays;
import java.util.Base64;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;

public class ConvertPEMPublicKeyToModulusAndExponent {

    private static byte[] cleanLeadingZeros(final byte[] pArr) {
        int i = 0;
        for(; i < pArr.length && pArr[i] == 0; ++i) {}
        return Arrays.copyOfRange(pArr, i, pArr.length);
    }

    public static void main(String[] args) throws IOException {
        String pubKey = new String(Files.readAllBytes(Path.of("public.key")));

        // get rid of pem formatting
        pubKey = pubKey.replace("-----BEGIN PUBLIC KEY-----", "")
                .replace("-----END PUBLIC KEY-----", "")
                .replaceAll("\\s", "");

        try {
            var keyFactory = KeyFactory.getInstance("RSA");
            byte[] b64Bytes = Base64.getDecoder().decode(pubKey.getBytes());
            var rsaPubKey = (RSAPublicKey) keyFactory.generatePublic(new X509EncodedKeySpec(b64Bytes));

            // remove leading zeros that are added as a sign bit
            // with those leading zeros, we would get a totally wrong base64 representation (*evil* bug)
            var modulus = cleanLeadingZeros(rsaPubKey.getModulus().toByteArray());
            var exponent = cleanLeadingZeros(rsaPubKey.getPublicExponent().toByteArray());

            // in a jwks modulus and exponent are most times base64 url encoded (*url* encoded just means that the '/' and '+' are replaced with '_' and '-', respectively)
            System.out.println("Modulus / n (B64): \n" + Base64.getUrlEncoder().encodeToString(modulus));
            System.out.println("Exponent / e (B64): \n" + Base64.getUrlEncoder().encodeToString(exponent));

        } catch (final NoSuchAlgorithmException | InvalidKeySpecException e) {
            e.printStackTrace();
        }
    }
}