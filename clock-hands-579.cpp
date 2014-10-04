// author: Rodrigo Alves
// problem: Clock Hands
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=101&page=show_problem&problem=520
// status: AC
#include <cstdio>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
  int hour, minute;
  double ang_hour, ang_minute, answer;

	scanf("%d:%d", &hour, &minute);

  while (hour + minute > 0) {
    if (hour == 12) hour = 0;
    ang_hour = hour * 30 + minute * 0.5;
    ang_minute = minute * 6;
    answer = abs(ang_hour - ang_minute);

    if (answer > 180) answer = 360 - answer;
    printf("%.3lf\n", answer);
    scanf("%d:%d", &hour, &minute);
	}

  return 0;
}
