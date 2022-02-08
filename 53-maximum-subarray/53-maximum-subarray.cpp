class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int count=0;
        for(int i=0;i<nums.size();i++) {
            count+=nums[i];
            sum=max(sum,count);
            if(count<0)count=0;
        }
        return sum;
    }
};