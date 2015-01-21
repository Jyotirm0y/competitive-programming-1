import java.util.Scanner;
import java.math.BigInteger;

/**
 * problem: Basic Remains
 * url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1492
 * authors: Rodrigo Alves
 * status: AC
 */
class Main {
  
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int b;
    String p_str, m_str;
    BigInteger p, m;
    
    while (true) {
      b = in.nextInt();
      if (b == 0) break;
      
      p_str = in.next();
      p = new BigInteger(p_str, b);
      m_str = in.next();
      m = new BigInteger(m_str, b);
      System.out.println((p.mod(m)).toString(b));
    }
  }
}
