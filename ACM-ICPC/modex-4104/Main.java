import java.math.BigInteger;
import java.util.Scanner;

/**
 * problem: MODEX
 * url: https://icpcarchive.ecs.baylor.edu/external/41/4104.pdf
 * authors: Rodrigo Alves
 * status: AC
 */
public class Main {

    public static void main(String[] args) {
        int c;
        BigInteger x, y, n;
        Scanner in = new Scanner(System.in);

        c = in.nextInt();

        for (int i = 0; i < c; i++) {
            x = in.nextBigInteger();
            y = in.nextBigInteger();
            n = in.nextBigInteger();

            System.out.println(x.modPow(y, n));
        }
    }
}
