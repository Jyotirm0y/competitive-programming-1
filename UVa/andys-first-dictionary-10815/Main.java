import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;

/**
* problem: Andy's First Dictionary
* url: http://uva.onlinejudge.org/external/108/10815.html
* author: Rodrigo Alves
* status: AC
*/
public class Main {
  private static int ZERO = 0;

  public static void main(String[] args)  {
    Scanner in = new Scanner(System.in);
    String line, aux;
    char current;

    HashSet<String> dictionary = new HashSet<String>();
    ArrayList<String> list = new ArrayList<String>();

    while (in.hasNextLine()) {
      line = in.nextLine();
      aux = "";

      for (int i = ZERO; i < line.length(); i++) {
        current = line.charAt(i);

        if (Character.isLetter(current)) {
          aux += current;
        } else {
          aux = aux.toLowerCase();
          if (aux.length() > ZERO) dictionary.add(aux);
          aux = "";
        }
      }

      if (aux.length() > ZERO) {
        aux = aux.toLowerCase();
        dictionary.add(aux);
      }
    }

    list.addAll(dictionary);
    Collections.sort(list);

    for (int i = ZERO; i < list.size(); i++) System.out.println(list.get(i));
  }
}
