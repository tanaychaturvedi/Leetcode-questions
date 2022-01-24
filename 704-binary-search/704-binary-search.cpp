class Solution {
    
    int binary(vector<int>& nums,int lo,int hi,int t)
    {
        if(hi>=lo){
        int mid=lo+( hi-lo )/2;
        if(nums[mid]==t)
            return mid;
        else if(nums[mid]>t)
           return binary(nums,lo,mid-1,t);
        else
           return binary(nums,mid+1,hi,t);
        }
        return -1;
    }
    
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        return binary(nums,0,n-1,target);
        
    }
};