import java.math.BigInteger;
import java.util.Scanner;

/**
 * problem: Adding Reversed Numbers
 * url: http://uva.onlinejudge.org/external/7/713.html
 * authors: Rodrigo Alves
 * status: AC
 */
public class Main {
    public static BigInteger reverse(BigInteger number) {
        BigInteger answer = BigInteger.ZERO;

        for (BigInteger i = number; i != BigInteger.ZERO; i = i.divide(BigInteger.TEN)) {
            answer = answer.multiply(BigInteger.TEN);
            answer = answer.add(i.mod(BigInteger.TEN));
        }

        return answer;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String line;
        BigInteger A, B;

        int N = in.nextInt();

        for (int i = 0; i < N; i++) {
            A = in.nextBigInteger();
            B = in.nextBigInteger();

            System.out.println(reverse(reverse(A).add(reverse(B))));
        }
    }
}

