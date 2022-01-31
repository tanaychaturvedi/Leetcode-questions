class Solution {
    
    int solve(int start,int end,vector<int> &nums)
    {
        vector<int> dp(end+1);
        dp[start]= nums[start];
        dp[start+1]=max(dp[start],nums[start+1]);
        for(int i=start+2;i<end;i++)
            dp[i]=max(dp[i-1],dp[i-2]+nums[i]);
        
        return dp[end-1];
        
        
    }
    
    
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        if(n==2)
            return max(nums[1],nums[0]);
        int op1=solve(0,n-1,nums);
        int op2=solve(1,n,nums);
        return max(op1,op2);
    
    }
};