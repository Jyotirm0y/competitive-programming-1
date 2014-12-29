import java.util.Scanner;
import java.util.Stack;

/**
* problem: What is the Card?
* url: http://uva.onlinejudge.org/external/106/10646.html
* author: Rodrigo Alves
* status: AC
*/
public class Main {
  static int TOP_COUNT = 25;
  static int CARDS = 52;
  static int TIMES = 3;

  public static int getValue(String card) {
    int integerValue, answer = 10;
    integerValue = Integer.parseInt(card.charAt(0) + "");
    if (integerValue >=2 && integerValue <= 9) answer = integerValue;

    return answer;
  }

  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int N, Y, X;
    String line, current, answer;
    Stack<String> pile;

    N = in.nextInt();

    for (int i = 1; i <= N; i++) {
      pile = new Stack<String>();
      answer = "";

      Y = 0;

      line = in.nextLine();
      String[] cards = line.split(" ");

      for (String str: cards) pile.push(str);

      for (int j = TOP_COUNT; j > 0; j--) {
        current = pile.pop();
        X = getValue(current);
        Y += X;

        for (int k = 0; k < 10 - X; k++) pile.pop();
      }

      System.out.printf("Case %d: %s\n", i, answer);
    }
  }
}
