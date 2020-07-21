// author: Rodrigo Alves Vieira
// problem: Factorial Digit Sum
// url: https://projecteuler.net/problem=20
// status: AC

import java.math.BigInteger;

public class Main {
    static BigInteger [] table = new BigInteger[101];

    public static int digits(BigInteger n) {
	int ans = 0;

	while (n != BigInteger.valueOf(0)) {
	    n = n.divide(BigInteger.valueOf(10));
	    ans++;
	}

	return ans;
    }

    public static int factorial(int n) {
	BigInteger one = BigInteger.valueOf(1);
	table[0] = table[1] = one;

	for (int i = 2; i < n; i++) table[i] = BigInteger.valueOf(i).multiply(table[i-1]);
	return 0;
    }

    public static void main (String[] args) {
	factorial(101);
	String number = table[100].toString();
	long res = 0;

	for (int i = 0; i < number.length(); i++) res += Character.getNumericValue(number.charAt(i));

	System.out.println(res);
    }
}
