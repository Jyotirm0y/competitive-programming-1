/**
 * problem: Binary Search Tree
 * url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3769
 * authors: Rodrigo Alves, Pedro Torchio
 * date: June 11, 2013
 */
import java.util.Scanner;

/**
 *
 * @author Rodrigo Alves, Pedro Torchio
 *
 */
class Tree {
	Tree left;
	Tree right;
	int value;

	public Tree() {
		this.left = this.right = null;
		this.value = 0;
	}

	public Tree(int input) {
		this.left = this.right = null;
		this.value = input;
	}

	public Tree insert(int i) {
		Tree no = new Tree(i);

		if (this.value == 0) {
			this.value = i;
		} else if (i < this.value) {
			if (this.left == null) {
				this.left = no;
			} else {
				this.left.insert(i);
			}
		} else {
			if (this.right == null) {
				this.right = no;
			} else {
				this.right.insert(i);
			}
		}

		return no;
	}

	public static String postOrder(Tree arvore) {
		String response = "";
		StringBuilder sb = new StringBuilder();

		if (arvore.value == 0) {
			return response + "\n";
		}

		if (arvore.left != null) {
			response += (postOrder(arvore.left) + "\n");
		}

		if (arvore.right != null) {
			response += (postOrder(arvore.right) + "\n");
		}

		sb.append(arvore.value);
		response += sb.toString();

		return response;
	}
}

public class Main {
	public static void main(String[] args) {
		Tree arvore = new Tree();
		Scanner in = new Scanner(System.in);
		int n;

		while(in.hasNext()) {
			n = in.nextInt();
			arvore.insert(n);
		}

		System.out.println(Tree.postOrder(arvore));
	}
}
