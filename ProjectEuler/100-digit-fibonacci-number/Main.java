// author: Rodrigo Alves
// problem: 1000-digit Fibonacci number
// url: https://projecteuler.net/problem=25
// status: AC

import java.util.Scanner;
import java.math.BigInteger;

public class Main {
  static BigInteger [] table = new BigInteger[4950];

  public static int digits(BigInteger n) {
    int ans = 0;

    while (n != BigInteger.valueOf(0)) {
      n = n.divide(BigInteger.valueOf(10));
      ans++;
    }

    return ans;
  }

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

    for (int i = 4780; i < 4790; i++) {
      System.out.println("N is: " + i + " and has " + digits(table[i]) + " digits");
    }
  }
}
