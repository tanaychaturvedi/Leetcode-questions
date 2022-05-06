class Solution {
public:
    int ms=0;
    int binary(vector<int> &nums,int target,int l,int h) {
        if(l<=h) {
            int mid=l+(h-l)/2;
            if(nums[mid]>=target)  {
               return binary(nums,target,l,mid-1);
                
            }
            else 
                return binary(nums,target,mid+1,h);
        }
        return l;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binary(nums,target,0,nums.size()-1);
    }
};