class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       vector<int> x=nums;
        int s=0;
        int n=nums.size()-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++) {
            if(nums[i]!=x[i])
                s=i;
        }
        
        for(int i=nums.size()-1;i>=0;i--) {
            if(nums[i]!=x[i])
                n=i;
        }
        if(s==0 and n==nums.size()-1)return 0;
        return abs(n-s)+1;
    }
};