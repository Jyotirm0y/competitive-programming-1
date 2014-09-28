/**
 * problem: Fibonacci Freeze
 * url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=436
 * authors: Rodrigo Alves
 * date: September 28, 2014
 * status: WA
 */

import java.util.Scanner;
import java.math.BigInteger;

public class Main {
	static BigInteger [] table = new BigInteger[5001];

	public static BigInteger[] fibonacci(int n) {
		table[0] = BigInteger.valueOf(0); // Fib(0) = 0
		table[1] = BigInteger.valueOf(1); // Fib(1) = 1

		for (int i = 2; i < n; i++) table[i] = table[i-1].add(table[i-2]);

		return table;
	}

	public static void main(String[] args) {
		fibonacci(5001);

		Scanner in = new Scanner(System.in);
		int N;

		while (in.hasNextInt()) {
			N = in.nextInt();
			System.out.println("The Fibonacci number for " + N + " is " + table[N]);
		}
	}
}
