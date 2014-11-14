// author: Rodrigo Alves
// problem: I Can Guess the Data Structure!
// url: http://uva.onlinejudge.org/index.php?commandtion=com_onlinejudge&Itemid=8&category=229&page=show_problem&problem=3146
// status: AC
#include <cstdio>
#include <stack>
#include <queue>

using namespace std;

int main() {
    int N, opt, x;

    while(scanf("%d", &N) == 1) {
      stack<int> Stack;
      queue<int> Queue;
      priority_queue<int> Heap;
      bool is_stack ,is_queue, is_heap;

      is_stack = is_heap = is_queue = true;

      while(N--) {
        scanf("%d %d", &opt, &x);

        if (opt == 1) {
            if(is_stack) Stack.push(x);
            if(is_queue) Queue.push(x);
            if(is_heap) Heap.push(x);
        } else if (opt == 2) {
          if (is_stack) {
            if(!Stack.empty() && Stack.top() == x) Stack.pop();
            else is_stack = false;
          }
          if (is_queue) {
            if(!Queue.empty() && Queue.front() == x) Queue.pop();
            else is_queue = false;
          }
          if (is_heap) {
            if(!Heap.empty() && Heap.top() == x) Heap.pop();
            else is_heap = false;
          }
        }
      }

      if (is_stack && !is_heap && !is_queue) {
        printf("stack\n");
      } else if (!is_stack && !is_heap && is_queue) {
        printf("queue\n");
      } else if (!is_stack && is_heap && !is_queue) {
        printf("priority queue\n");
      } else if (is_heap || is_queue || is_stack) {
        printf("not sure\n");
      } else {
        printf("impossible\n");
      }
    }

    return 0;
}
