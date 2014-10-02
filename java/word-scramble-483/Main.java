/**
 * problem: Word Scramble
 * url: http://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=424
 * authors: Rodrigo Alves
 * date: October 02, 2014
 * status: AC
 */
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String line;
		StringBuilder newLine;
		String[] words;

		while (in.hasNextLine()) {
			line = in.nextLine();
			words = line.split(" ");
			newLine = new StringBuilder("");

			for (int i = 0; i < words.length; i++) {
				if (i == words.length - 1) newLine.append(new StringBuilder(words[i]).reverse());
				else newLine.append(new StringBuilder(words[i]).reverse()).append(" ");
			}

			System.out.println(newLine);
		}
	}
}
