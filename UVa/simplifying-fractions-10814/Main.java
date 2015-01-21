import java.util.Scanner;
import java.math.BigInteger;

/**
 * problem: Simplifying Fractions
 * url: http://uva.onlinejudge.org/external/108/10814.html
 * authors: Rodrigo Alves
 * status: AC
 */
class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    BigInteger p, q, gcd_pq;
    String ch;
    int N = sc.nextInt();
    
    while (N-- > 0) {
      p = sc.nextBigInteger();
      ch = sc.next();
      q = sc.nextBigInteger();
      gcd_pq = p.gcd(q); // wow :)
      System.out.println(p.divide(gcd_pq) + " / " + q.divide(gcd_pq));
    }
  }
}

