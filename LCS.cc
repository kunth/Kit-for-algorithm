//LCS, Longest-Common-Subsequence, 最长公共子序列, 字符可以不连续
class Solution {
public:
    string getMaxSub(string str1, string str2) {
        int len1 = str1.length(), len2 = str2.length();
        if(!len1 || !len2)
            return "";
        vector<vector<int>>dp(len1+1, vector<int>(len2+1, 0));
        for(int i = 0; i<len1; ++i) {
            for(int j = 0; j<len2; ++j) {
                //dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]) + (str1[i]==str2[j]);
                if(str1[i] == str2[j])
                    dp[i+1][j+1] = 1 + dp[i][j];
                else
                    dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }

        string ans;
        int i = len1, j = len2;
        while(i && j) {
            if(dp[i][j]==dp[i-1][j-1]+1) {
                if(dp[i][j-1] > dp[i-1][j])
                    ans += str1[i-1];
                else
                    ans += str2[j-1];
                --i;
                --j;
            }
            else if(dp[i][j-1] > dp[i-1][j]) {
                --j;
            } else
                --i;
        }
        return ans;
    }
};
