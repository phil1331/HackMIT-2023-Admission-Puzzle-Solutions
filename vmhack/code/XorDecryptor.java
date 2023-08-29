import java.io.IOException;
import java.net.URISyntaxException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.ArrayList;

public class XorDecryptor {

    public static void main(String[] args) {
        try {
            pullThisOff();
        } catch (URISyntaxException | IOException e) {
            throw new RuntimeException(e);
        }
    }

    private static ArrayList<Long> getInstructions() throws URISyntaxException, IOException {
        // Reading file
        final String fileContent = new String(Files.readAllBytes(Path.of("../logs/bytes.txt")));
        final var instructions = new ArrayList<Long>();

        // converting every 8 hex digits into one boxed Long, each representing a 32-bit instruction
        for(int i = 8; i <= fileContent.length(); i += 8) {
            final var tmpSubstring = fileContent.substring(i - 8, i);
            instructions.add(Long.parseLong(tmpSubstring, 16));
        }

        return instructions;
    }

    private static void pullThisOff() throws URISyntaxException, IOException {
        final var addresses = getInstructions();

        for(int i = 0; i < addresses.size(); ++i) {
            int nextMaskIdx = i + 17;
            if(nextMaskIdx >= addresses.size()) { // pattern changed, magic value isn't at the expected offset of *17* in the address list anymore
                System.out.println();
                System.out.print("Last bytes after the pattern changed: ");
                nextMaskIdx = addresses.size() - 1;
            }
            long currentMagicNumber = addresses.get(nextMaskIdx);

            for(; i < nextMaskIdx; ++i) {
                long decryptedInstruction = addresses.get(i) ^ currentMagicNumber; // xor decrypt each instruction

                // REVERSE SECTION
                // Print the bytes of each instruction in reverse order as we are dealing with a Little Endian system
                long map = 0xff000000L;

                for(int k = 24; map != 0; k -= 8, map >>>= 8) {
                    System.out.printf("\\x%02x", (decryptedInstruction & map) >>> k);
                }
            }
        }


    }
}
