//最长连续子串
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	string str1 = "fcswxaswefsdfa", str2 = "sdfadfafasdf";
	int len1 = str1.length(), len2 = str2.length();
	vector<vector<int> >dp(len1+1, vector<int>(len2+1, 0));

	for(int i = 1; i<=len1; ++i)
		for(int j = 1; j<=len2; ++j)
			if(str1[i-1]==str2[j-1])
				dp[i][j] = 1+dp[i-1][j-1];

	int ans = 0, x = 0, y=0;
	for(int i = 0; i<=len1; ++i)
		for(int j = 0; j<=len2; ++j)
			if(dp[i][j] > ans) {
				x = i;
				y = j;
				ans = dp[i][j];
			}
	
	for(int i = ans; i; --i){
		printf("%c", str1[x-i]);
	}
	printf("\n");
	/*
	printf("x=%d y=%d\n", x, y);
	for(int i = ans; i; --i){
		printf("%d %c\n", i, str2[y-i]);
	}
	*/
	printf("\nthe length is %d\n", ans);
	return 0;	
}
