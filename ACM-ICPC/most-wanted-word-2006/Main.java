/**
* problem: Most Wanted Word
* url: https://icpcarchive.ecs.baylor.edu/index.php?option=com_onlinejudge&Itemid=8&category=86&page=show_problem&problem=7
* authors: Rodrigo Alves
* status: AC
*/
import java.util.HashMap;
import java.util.Scanner;

class Pair {
  int frequency;
  int arrayPos;

  public  Pair(int c, int a) {
    this.frequency = c;
    this.arrayPos = a;
  }
}

public class Main {
  public static String RULE = "^[a-zA-Z]*$";

  public static void main(String[] args) {
    String line;
    String[] wordsArray = new String[2000];

    HashMap<String, Pair> words = new HashMap<String, Pair>();

    int counter = 0, topFrequency = 0;
    String topFreq = "";

    Scanner in = new Scanner(System.in);

    while (in.hasNextLine()) {
      line = in.nextLine();
      if (line.equals("#")) continue;

      line.replaceAll(RULE, " ").toLowerCase();

      for (String str: line.split(" ")) {
        if (!words.containsKey(str)) {
          words.put(str, new Pair(1, counter++));
        } else {
          words.get(str).frequency++;
        }

        if (words.get(str).frequency > topFrequency) {
          topFrequency = words.get(str).frequency;
          topFreq = str;
        }
      }

      System.out.println("top freq eh " + topFreq);
    }

  }
}
