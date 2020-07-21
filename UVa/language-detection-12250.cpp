// author: Rodrigo Alves Vieira
// problem: Language Detection
// url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=3402&mosmsg=Submission+received+with+ID+251799562
// status: AC
#include <cstdio>
#include <string.h>
using namespace std;

int main() {
  char greeting[14];
  int caseNo = 1;

  while (scanf("%s", greeting) && strcmp(greeting, "#") != 0) {
    if (strcmp(greeting, "HELLO") == 0) {
      printf("Case %d: %s\n", caseNo++, "ENGLISH");
    } else if (strcmp(greeting, "HOLA") == 0) {
      printf("Case %d: %s\n", caseNo++, "SPANISH");
    } else if (strcmp(greeting, "HALLO") == 0) {
      printf("Case %d: %s\n", caseNo++, "GERMAN");
    } else if (strcmp(greeting, "BONJOUR") == 0) {
      printf("Case %d: %s\n", caseNo++, "FRENCH");
    } else if (strcmp(greeting, "CIAO") == 0) {
      printf("Case %d: %s\n", caseNo++, "ITALIAN");
    } else if (strcmp(greeting, "ZDRAVSTVUJTE") == 0) {
      printf("Case %d: %s\n", caseNo++, "RUSSIAN");
    } else {
      printf("Case %d: %s\n", caseNo++, "UNKNOWN");
    }
  }

  return 0;
}
