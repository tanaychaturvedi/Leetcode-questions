class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++) {
                ans+=nums[i];
            i++;
        }
        return ans;
    }
};