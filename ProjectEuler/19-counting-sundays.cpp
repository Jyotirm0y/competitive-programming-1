// author: Rodrigo Alves Vieira
// problem: Counting Sundays
// url: http://projecteuler.net/problem=19
// status: UN
// submitted: July 15th 2020

#include <cstdio>
using namespace std;

bool is_leap(int year) {
  bool h_div = year % 100;
  return ((year % 4 == 0 && h_div != 0) || (h_div == 0 && year % 400 == 0));
}

int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int firstSundays[100] = {};

int main() {
  // 1 Jan 1900 was a Monday.
  // 7 Jan 1900 was a Sunday.

  int numRem1900days = is_leap(1900) ? 366 - 7 : 365 - 7;
  int last1900Sunday = numRem1900days % 7;
  int firstSunday = 7 - last1900Sunday;

  firstSundays[0] = firstSunday;
  int index = 0;

  for (int i = 1902; i <= 2000; i++) {
    int numRemDays = is_leap(i) ? 366 - firstSundays[index] : 365 - firstSundays[index];
    int lastSunday = numRemDays % 7;
    int premierSunday = 7 - lastSunday;

    index++;

    firstSundays[index] = premierSunday;
  }

  for (int i = 0; i < 100; i++) {
    printf("%d | ", firstSundays[i]);
  }

  printf("\n");

  return 0;
}
