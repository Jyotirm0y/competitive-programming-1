import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

/**
 * problem: Andy's First Dictionary
 * url: http://uva.onlinejudge.org/external/108/10815.html
 * author: Rodrigo Alves
 * status: AC
 */
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String text, aux;
        String[] lines = new String[5001], splitted;
        String[] result = new String[5001];

        int counter = 0, resultIndex = 0;

        HashMap<String, Boolean> map = new HashMap<String, Boolean>();

        while (in.hasNextLine()) {
            text = in.nextLine();
            lines[counter++] = text;
        }

        for (int i = 0; i < counter; i++) {
            if (!lines[i].isEmpty()) {
                splitted = lines[i].split(" ");

                for (String str: splitted) {
                    aux = str.toLowerCase().replaceAll("[^a-zA-Z]", "");

                    if (map.containsKey(aux) == false) {
                        map.put(aux, true);
                        result[resultIndex++] = aux;
                    }
                }
            }
        }

        Arrays.sort(result, 0, resultIndex);

        for (int i = 0; i < resultIndex; i++) System.out.println(result[i]);
    }
}
