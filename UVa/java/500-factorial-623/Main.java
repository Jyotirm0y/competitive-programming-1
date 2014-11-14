/**
 * problem: 500! Factorial
 * url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=564
 * authors: Rodrigo Alves
 * date: September 29, 2014
 * status: AC
 */

import java.util.Scanner;
import java.math.BigInteger;

public class Main {
  static BigInteger[] table = new BigInteger[1001];

	public static int factorial(int n) {
		BigInteger one = BigInteger.valueOf(1);
		table[0] = table[1] = one;

		for (int i = 2; i < n; i++) table[i] = BigInteger.valueOf(i).multiply(table[i-1]);
		return 0;
	}

	public static void main (String[] args) {
		factorial(1001);

    Scanner in = new Scanner(System.in);
    int N;

    while (in.hasNextInt()) {
      N = in.nextInt();
      System.out.println(N + "!\n" + table[N]);
    }
	}
}
