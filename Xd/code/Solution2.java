import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.util.Arrays;
import java.util.LinkedHashSet;
import java.util.Set;
import java.util.stream.Collectors;

public class Solution2 {

    // numbers are the numbers in the README2
    private static void solveProblem(int currentNum, Set<Integer> numbers, Set<Integer> visited, int repeatDistance) {
        // rule 1
        if (visited.contains(currentNum) || !numbers.contains(currentNum)) {
            return;
        }

        visited.add(currentNum);

        if (currentNum == 9765625) {
            System.out.println("Found solution: ");
            // print solution
            System.out.println(visited.stream()
                    .map(i -> i + "")
                    .collect(Collectors.joining("/", "cd ", "")));
            return;
        }

        if (repeatDistance != 0) {
            // if the previous distance was a non-repeated distance or there was no distance before, repeat the previous distance again (rule 3)
            solveProblem(currentNum + repeatDistance, numbers, visited, 0);
        } else {
            // visit numbers with distances from current number in +- 5^k, k in 0..9
            for (int i = 0; i < 10; ++i) {
                final int curPower = (int) Math.pow(5, i);
                solveProblem(currentNum + curPower, numbers, visited, curPower);
                solveProblem(currentNum - curPower, numbers, visited, -curPower);
            }
        }

        visited.remove(currentNum);
    }

    public static void main(String[] args) {
        try {
            // Reading file README2.txt
            final String readMeContent = new String(Files.readAllBytes(Path.of("../logs/README2.txt")));

            // convert the string of whitespace (\s) of arbitrary length (+) separated numbers first to a stream of integers (Integer::parseInt) and afterwards to an unmodifiable set of ints
            final Set<Integer> numbers = Arrays.stream(readMeContent.split("\\s+"))
                    .map(Integer::parseInt)
                    .collect(Collectors.toUnmodifiableSet());

            // visited numbers Set, a LinkedHashSet, meaning it is a set but the numbers stay in their order
            final Set<Integer> visited = new LinkedHashSet<>();

            solveProblem(1, numbers, visited, 0);

        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

}
