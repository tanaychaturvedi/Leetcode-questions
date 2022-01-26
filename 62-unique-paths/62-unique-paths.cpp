class Solution {
      int dp[101][101];
  
    int solve(int i,int j,int n,int m)
    {
        if(i==(n-1) && j==(m-1))
            return 1;
        if(i>=n || j>=m )
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        else
            return dp[i][j]= solve(i+1,j,n,m) +solve(i,j+1,n,m);
    }
public:
    int uniquePaths(int m, int n) {
             int i=0;
        int j=0;
        memset(dp,-1,sizeof(dp));
       return solve(i,j,n,m);
        
    }
};