//dp[i][j] means the min values by selecting j pairs form the preceding i things. i>=2*j
#include<cstdio>
#include<climits>
#include<cstring>
#include<algorithm>
using namespace std;

int dp[2010][1005];

int main(){
  int n, k, arr[2010];
  //freopen("in.txt", "r", stdin);
  while(scanf("%d %d", &n, &k)!=EOF) {
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i<n; ++i)
      scanf("%d", arr+i);

    sort(arr, arr+n);
    for(int i = 2; i<=n; ++i) {
      for(int j = 1; 2*j<=i && j<=k; ++j) {
        if(i==2*j)
          dp[i][j] = dp[i-2][j-1] + (arr[i-1]-arr[i-2]) * (arr[i-1]-arr[i-2]);
        else
          dp[i][j] = min(dp[i-1][j], dp[i-2][j-1] + (arr[i-1]-arr[i-2])*(arr[i-1]-arr[i-2]));
      }
    }
    printf("%d\n", dp[n][k]);
  }
  return 0;
}
