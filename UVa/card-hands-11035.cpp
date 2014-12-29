// author: Rodrigo Alves
// problem: Card Hands
// url: http://uva.onlinejudge.org/external/110/11035.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

struct card {
  pair<char, char> value;
  vector<card*> predecessors;
};

int main()
{

  int N, count, numOfCards, z;
  char num, suit;
  scanf("%d", &N);

  while (N) {
    count = 0;
    card* baseNode = new card;

    for (int i = 0; i < N; ++i) {
      scanf("%d", &numOfCards);
      vector<pair<char, char> > tempPairs(numOfCards);

      for (int z = 0; z < numOfCards; ++z) {
        cin >> num;

        if (num == '1')
          cin >> num;
          cin >> suit;
          tempPairs[z] = make_pair(num, suit);
      }

      tempPairs.push_back(make_pair('T', 0));
      z = numOfCards;
      card* current = baseNode;

      for (; z > 0; --z) {
        bool match = false;

        for (int k = 0; k < current->predecessors.size(); k++) {
          card* aux = current->predecessors[k];

          if ((aux)->value == tempPairs[z - 1]) {
            match = true;
            current = aux;
            break;
          }
        }

        if (!match) break;
      }

      count += z;

      for (;z >0; --z) {
        card* newNode = new card;
        newNode->value = tempPairs[z - 1];
        current->predecessors.push_back(newNode);
        current = newNode;
      }
    }

    printf("%d\n", count);
    scanf("%d", &N);
  }
}
