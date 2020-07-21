// author: Rodrigo Alves Vieira
// problem: Number letter counts
// url: http://projecteuler.net/problem=17
// status: AC
// submitted: June 25th 2020

#include <string>
#include <unordered_map>
using namespace std;

string countTens(unordered_map<int, string> table, int n) {
  int mod = n % 10;
  if (mod == 0) return table[n];

  int div = n - mod;
  return table[div] + table[mod];
}

string countHundreds(unordered_map<int, string> table, int n) {
  int mod = n % 100;
  int res = n / 100;
  string hundreds = table[res] + "hundred";

  if (mod == 0) return hundreds;

  if (mod < 20) return hundreds + "and" + table[mod];

  return hundreds + "and" + countTens(table, mod);
}

string numberToWords(unordered_map<int, string> table, int n) {
  if (n == 1000) return "onethousand";
  if (n <= 20) return table[n];
  if (n < 100) return countTens(table, n);
  if (n < 1000) return countHundreds(table, n);

  return "";
}

int main() {
  unordered_map<int, string> table;

  table[1] = "one";
  table[2] = "two";
  table[3] = "three";
  table[4] = "four";
  table[5] = "five";
  table[6] = "six";
  table[7] = "seven";
  table[8] = "eight";
  table[9] = "nine";
  table[10] = "ten";
  table[11] = "eleven";
  table[12] = "twelve";
  table[13] = "thirteen";
  table[14] = "fourteen";
  table[15] = "fifteen";
  table[16] = "sixteen";
  table[17] = "seventeen";
  table[18] = "eighteen";
  table[19] = "nineteen";
  table[20] = "twenty";
  table[30] = "thirty";
  table[40] = "forty";
  table[50] = "fifty";
  table[60] = "sixty";
  table[70] = "seventy";
  table[80] = "eighty";
  table[90] = "ninety";

  string result = "";

  for (int i = 1; i <= 1000; i++) {
    result = result + numberToWords(table, i);
  }

  printf("%ld\n", result.length());

  return 0;
}
