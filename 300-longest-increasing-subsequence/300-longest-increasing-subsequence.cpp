class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        int n=v.size();
        vector<int> dp(n+1);
        dp[0]=1;
        for(int i=1;i<n;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(v[i]>v[j] && dp[i]<dp[j]+1)
                    dp[i]=dp[j]+1;
            }
        }
        return *max_element(dp.begin(),dp.end());
        
    }
};