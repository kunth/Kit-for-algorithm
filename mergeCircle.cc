#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

const int N = 100;
int num[N], sum[N], dp[N][N];
int main(){
	int input[] = {3, 4, 6, 5, 4, 2};
	int len = sizeof(input) / sizeof(int);
	for(int i = 1; i<=len; ++i)
		num[i] = num[i+len] = input[i];

	memset(dp, 0, sizeof(dp));
	memset(sum, 0, sizeof(sum));
	for(int i = 1; i<=2*len; ++i)
		sum[i] = sum[i-1] + num[i];
	//dp[i][j] = max(dp[i][k] + dp[k+1][j]) + sum[i, j];
	//dp[i][j] = max(dp[i][k] + dp[k+1][j]) + sum[j] - sum[i-1];
	for(int i = 1; i<2*len; ++i)
		dp[i][i+1] = num[i] + num[i+1];

	for(int i = 1; i<=len; ++i){
		for(int j = i+1; j-i<=len; ++j){
			for(int k=i+1; k<j; ++k) {
				dp[i][j] = max(dp[i][j], dp[i][k] + dp[k+1][j]) + sum[j] - sum[i-1];
			}
		}
	}
	int ans = 0;
	for(int i = 1; i<=len; ++i)
		ans = max(ans, dp[i][i+len]);
	printf("%d\n", ans);
	return 0;
}
