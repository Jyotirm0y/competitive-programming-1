/**
 * problem: Very Easy!!!
 * url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1464
 * authors: Rodrigo Alves
 * date: November 2, 2013
 */

import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int N, A;
        BigInteger sum, tmpA;

        while(input.hasNextInt()) {
            N = input.nextInt();
            A = input.nextInt();

            sum = new BigInteger("0");
            tmpA = BigInteger.valueOf(A);

            // "E means exponent, E means error. So try to avoid exponent whenever possible."
            for (int i = 1; i <= N; i++) sum = sum.add(BigInteger.valueOf(i).multiply(tmpA.pow(i)));

            System.out.println(sum);
        }
    }
}