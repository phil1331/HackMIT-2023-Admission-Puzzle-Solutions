import java.util.Scanner;
import java.util.regex.MatchResult;
import java.util.regex.Pattern;

public class EntrancePuzzle {
    public static void main(String [] args) {
        final var s = new Scanner(System.in);
        
        s.findAll("(?i)woofwoof")                             // if input matches the PCRE (regular expression) do following operations
            .map(MatchResult::group)                                    // choose default group
            .map(c -> c.replaceAll("[WOF]", "1"))     // replace all uppercase characters 'W', 'O' or 'F' with 1
            .map(c -> c.replaceAll("[wof]", "0"))     // replace all lowercase characters 'w', 'o' or 'f' with 0
            .map(c -> Integer.parseInt(c, 2))                     // convert binary string to int
            .map(Character::toString)                                   // convert int (ascii representation) to a string representing the ascii character
            .forEach(System.out::print);                                // print resulting character
        
        s.close(); // close scanner to prevent a resource leak
    }


}