/**
 * problem: I Love Big Numbers!
 * url: http://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=&problem=1161&mosmsg=Submission+received+with+ID+14289045
 * authors: Rodrigo Alves
 * date: September 30, 2014
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
    		BigInteger N, M, sum;

    		while (in.hasNextInt()) {
      			N = table[in.nextInt()];
      			sum = BigInteger.valueOf(0);

      			while (N != BigInteger.valueOf(0)) {
                sum = sum.add(N.mod(BigInteger.valueOf(10)));
                N = N.divide(BigInteger.valueOf(10));
            }

    			  System.out.println(sum);
    		}
  	}
}
