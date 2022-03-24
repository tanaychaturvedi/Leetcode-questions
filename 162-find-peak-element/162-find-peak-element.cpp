class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1)return 0;
        for(int i=1;i<nums.size()-1;i++) {
            if(nums[i]>nums[i-1] and nums[i]>nums[i+1])
                return i;
        }
        int n=nums.size();
        if(nums[n-1]>nums[n-2])return n-1;
        if(nums[0]>nums[1])return 0;
        return -1;
    }
};