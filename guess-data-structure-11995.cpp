// author: Rodrigo Alves
// problem: I Can Guess the Data Structure!
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=229&page=show_problem&problem=3146
// status: AC
#include <cstdio>
#include <vector>
#include <stack>
using namespace std;

int main()
{
  int N, command, x;
  bool is_queue, is_stack, is_heap;

  freopen("input.txt", "r", stdin);

  vector<int> inputs;
  vector<int> outputs;

  while (scanf("%d", &N) != EOF) {
    stack<int> Stack;

    while (N--) {
      scanf("%d", &command);
      scanf("%d", &x);

      if (command == 1) {
        inputs.push_back(x);
        Stack.push(x);
      } else {
        outputs.push_back(x);
      }
    }

    int len = inputs.size();
    int len2 = outputs.size();

    for (int i = 0, j = 0; j < len2; i++, j++) {
      if (inputs[i] == outputs[j]) {
        is_queue = true;
      } else {
        is_queue = false;
        break;
      }
    }

    for (int i = 0; i < len2; i++) {
      if (outputs[i] == Stack.top()) {
        is_stack = true;
      } else {
        is_stack = false;
        break;
      }

      Stack.pop();
    }

    if (!is_queue) {
      sort(inputs.begin(), inputs.end());
      sort(outputs.begin(), outputs.end());

      for (int i = len2 - 1, j = len - 1; i >= 0; i--, j--) {
        if (outputs[i] == inputs[j]) {
          is_heap = true;
        } else {
          is_heap = false;
          break;
        }
      }
    }

    if (is_stack && !is_queue && !is_heap) {
      printf("%s\n", "stack");
	  } else if (!is_stack && is_queue && !is_heap) {
      printf("%s\n", "queue");
	  } else if (!is_stack && !is_queue && is_heap) {
      printf("%s\n", "priority_queue");
	  } else if (!is_stack && !is_queue && !is_heap) {
      printf("%s\n", "impossible");
    } else {
      printf("%s\n", "not sure");
    }

    inputs.clear();
    outputs.clear();
  }

  return 0;
}
