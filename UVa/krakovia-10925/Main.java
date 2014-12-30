import java.math.BigInteger;
import java.util.Scanner;

/**
 * problem: Krakovia
 * url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1866
 * authors: Rodrigo Alves
 * status: AC
 */
public class Main {

    public static void main(String[] args) {
        int N, F, counter = 0;
        BigInteger current, sum;
        Scanner in = new Scanner(System.in);

        while (true) {
            N = in.nextInt();
            F = in.nextInt();

            if (N == 0 && F == 0) break;
            sum = BigInteger.ZERO;

            for (int i = 0; i < N; i++) {
                current = in.nextBigInteger();
                sum = sum.add(current);
            }

            System.out.println("Bill #" + ++counter + " costs " + sum +
                    ": each friend should pay " + sum.divide(BigInteger.valueOf(F)) + "\n");
        }
    }
}
