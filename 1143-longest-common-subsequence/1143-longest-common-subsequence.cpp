int dp[1003][1003];
class Solution {
    int solve(string &s1, string &s2,int m,int n) {
        if(m==0 || n==0)
            return 0;
        if(dp[m][n]!=-1)
            return dp[m][n];
        if(s1[m-1]==s2[n-1])
            return 1+ solve(s1,s2,m-1,n-1);
        else
            return dp[m][n]=max(solve(s1,s2,m-1,n),solve(s1,s2,m,n-1));
    }
public:
    int longestCommonSubsequence(string s1, string s2) {
     
        memset(dp,-1,sizeof(dp));
        return solve(s1,s2,s1.size(),s2.size());
    }
};