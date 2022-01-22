class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        
        
        int n=cost.size();
        vector<int> dp(n+2);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++)
            dp[i]=min(cost[i]+dp[i-2],cost[i]+dp[i-1]);
        
        return min(dp[n-1],dp[n-2]);
                                                
        
    }
};