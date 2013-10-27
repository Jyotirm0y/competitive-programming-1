// author: Rodrigo Alves
// problem: Google is Feeling
// url: http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3166
// type: Ad hoc
// status: AC

#include <stdio.h>
#include <vector>
using namespace std;

// search object
struct SObject {
    int rankNo;
    char urlString[101];
};

int main()
{
    int N, i, tempRank = 0, rank = 0, cas = 0;
    scanf("%d", &N);

    char url[101];

    std::vector<SObject> entries;
    struct SObject so;

    while(N--) {
        printf("Case #%d:\n", ++cas);
        tempRank = rank = 0;
        entries.clear();

        for (i = 0; i < 10; i++) {
            scanf("%s %d", url, &tempRank);
            if (tempRank > rank) rank = tempRank;

            so.rankNo = tempRank;
            strcpy(so.urlString, url);

            entries.push_back(so);
        }

        for (int i = 0; i < 10; i++) {
            if (entries.at(i).rankNo == rank) printf("%s\n", entries.at(i).urlString);
        }
    }

    return 0;
}