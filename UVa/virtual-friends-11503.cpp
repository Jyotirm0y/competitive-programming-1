// author: Rodrigo Alves
// problem: Virtual Friends
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2498
// status: AC

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <map>

#define f(x) (x?x:1)

using namespace std;

map<string, string> graph;
map<string, int> people;

string find(string node)
{
  if (graph[node] == "") return node;
  return graph[node] = find(graph[node]);
}

int join(string node1, string node2)
{
  string u = find(node1);
  string v = find(node2);
  if (u != v) {
    graph[u] = v;
    people[v] = f(people[v]) + f(people[u]);
    return people[v];
  }

  return people[u];
}

int main()
{
  int N, F;
  string name1, name2;
  scanf("%d", &N);

  while (N--) {
    graph.clear();
    people.clear();

    scanf("%d", &F);

    while (F--) {
      cin >> name1 >> name2;
      printf("%d\n", join(name1, name2));
    }
  }

  return 0;
}
