/**
 * problem: Group Reverse
 * url: http://uva.onlinejudge.org/external/111/11192.html
 * authors: Rodrigo Alves
 * date: October 03, 2014
 * status: AC
 */
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String line;
		StringBuilder result;
		int N, M;

		while (in.hasNextInt()) {
			N = in.nextInt();
			if (N == 0) break;

			line = in.nextLine().trim();
			result = new StringBuilder("");

			M = line.length() / N;

			for (int i = 0; i < line.length(); i+= M) {
				result.append(new StringBuilder(line.substring(i, i + M)).reverse());
			}

			System.out.println(result);
		}
	}
}
