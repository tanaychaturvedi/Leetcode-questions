class Solution {
public:
    int longestCommonSubsequence(string l1, string l2) {
        int m=l1.size();
        int n=l2.size();
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++) {
            for(int j=0;j<=n;j++) {
                if(i==0 or j==0)
                    dp[i][j]=0;
            }
        }
        
        for(int i=1;i<=m;i++) {
            for(int j=1;j<=n;j++) {
                if(l1[i-1]==l2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[m][n];
    
    }
};