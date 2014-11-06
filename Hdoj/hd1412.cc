#include<cstdio>
#include<set>
using namespace std;

int main() {
  int n, m, num;
  freopen("in.txt", "r", stdin);
  while(scanf("%d %d", &n, &m)!=EOF) {
    set<int>S;
    for(int i = 0; i<n; ++i) {
      scanf("%d", &num);
      S.insert(num);
    }
    for(int i = 0; i<m; ++i) {
      scanf("%d", &num);
      S.insert(num);
    }
    for(set<int>::iterator it = S.begin(); it!=S.end(); ++it) {
      it == S.begin() ? printf("%d", *it) : printf(" %d", *it);
    }
    printf("\n");
  }
  return 0;
}
