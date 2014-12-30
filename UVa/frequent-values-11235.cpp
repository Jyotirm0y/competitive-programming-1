// author: Rodrigo Alves
// problem: Frequent Values
// url: http://uva.onlinejudge.org/external/112/11235.html
// status: AC
#include <bits/stdc++.h>
using namespace std;

#define FOR(i, n) for (int i = 0; i < n; ++i)

typedef vector<int> vi;

class SegmentTree {
private: vi st, A;
  int n;
  int left (int p) { return p << 1; }
  int right(int p) { return (p << 1) + 1; }

  void build(int p, int L, int R) {
    if (L == R)
      st[p] = L;
    else {
      build(left(p) , L              , (L + R) / 2);
      build(right(p), (L + R) / 2 + 1, R          );
      int p1 = st[left(p)], p2 = st[right(p)];
      st[p] = compare(p1,p2,0) ? p1 : p2;
  } }

  bool compare(int idx1, int idx2, int i) {
    return adjusted_val(idx1, i) >= adjusted_val(idx2, i);
  }

  inline bool is_true_val(int idx,int i) {
    return A[idx]<=idx-i+1;
  }

  int rmq(int p, int L, int R, int i, int j) {
    if (i >  R || j <  L) return -1;
    if (L==R) return st[p];
    if (L >= i && R <= j && is_true_val(st[p],i)) return st[p];

    int p1 = rmq(left(p) , L              , (L+R) / 2, i, j);
    int p2 = rmq(right(p), (L+R) / 2 + 1, R          , i, j);

    if (p1 == -1) return p2;
    if (p2 == -1) return p1;
    return compare(p1,p2,i) ? p1 : p2; 
  }

public:
  inline int adjusted_val(int idx, int i) {
    int adj = min(idx-i+1, A[idx]);
    return adj;
  }

  SegmentTree(const vi &_A) {
    A = _A; n = (int) A.size();
    st.assign(4 * n, 0);
    build(1, 0, n - 1);
  }

  int rmq(int i, int j) { return rmq(1, 0, n - 1, i, j); }
};

int main(int argc, char* argv[])
{
  int n, q, current, previous, count, rmq, adj, i, j;
  
  while (scanf("%d", &n) && n) {
    scanf("%d", &q);
    count = 1;

    vi A(n, 0);

    FOR (p, n) {
      scanf("%d", &current);
      if (current != previous) count = 1;

      previous = current;
      A[p] = count++;
    }
    
    SegmentTree st(A);
    
    FOR (k, q) {
      scanf("%d %d", &i, &j);
      
      rmq = st.rmq(--i, --j);
      adj = st.adjusted_val(rmq, i);

      printf("%d\n", adj);
    }
  }

  return 0;
}