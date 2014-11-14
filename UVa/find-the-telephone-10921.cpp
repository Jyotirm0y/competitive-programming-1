// author: Rodrigo Alves
// problem: Find the Telephone
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1862
// status: AC
 
#include <stdio.h>
char exp[31];
int i;

int main()
{
	while (scanf("%s", exp) != EOF) {
		char output[31];
		i = 0;

		while (exp[i]) {
			if (exp[i] == '-') output[i] = '-';
			else if (exp[i] == '0') output[i] = '0';
			else if (exp[i] == '1') output[i] = '1';
			else if (exp[i] >= 'A' && exp[i] <= 'C') output[i] = '2';
			else if (exp[i] >= 'D' && exp[i] <= 'F') output[i] = '3';
			else if (exp[i] >= 'G' && exp[i] <= 'I') output[i] = '4';
			else if (exp[i] >= 'J' && exp[i] <= 'L') output[i] = '5';
			else if (exp[i] >= 'M' && exp[i] <= 'O') output[i] = '6';
			else if (exp[i] >= 'P' && exp[i] <= 'S') output[i] = '7';
			else if (exp[i] >= 'T' && exp[i] <= 'V') output[i] = '8';
			else if (exp[i] >= 'W' && exp[i] <= 'Z') output[i] = '9';
			i++;
		}

		i = 0;

		while (exp[i]) {
			printf("%c", output[i]);
			i++;
		}

		printf("\n");
	}

	return 0;
}
