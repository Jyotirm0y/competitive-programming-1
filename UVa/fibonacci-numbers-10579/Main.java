/**
 * problem: Fibonacci Numbers
 * url: http://uva.onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=&problem=1520&mosmsg=Submission+received+with+ID+14289539
 * authors: Rodrigo Alves
 * date: October 01, 2014
 * status: AC
 */
import java.util.Scanner;
import java.math.BigInteger;

public class Main {
  	static BigInteger [] table = new BigInteger[4950];

  	public static BigInteger[] fibonacci(int n) {
    		table[0] = BigInteger.valueOf(0);
    		table[1] = BigInteger.valueOf(1);

    		for (int i = 2; i < n; i++) table[i] = table[i-1].add(table[i-2]);

    		return table;
  	}

  	public static void main(String[] args) {
    		fibonacci(4900);

    		Scanner in = new Scanner(System.in);
    		int N;

    		while (in.hasNextInt()) {
            N = in.nextInt();
    			  System.out.println(table[N]);
    		}
  	}
}
