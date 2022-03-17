class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        
        vector<int>v(n);//resutl vector
        int k=n-1;//start traversing for the end of v till 0   
        
        while(low<=high){
            if(abs(nums[low]) > abs(nums[high])){
                v[k--]=nums[low] * nums[low];
                low++;
            }else{
                v[k--]=nums[high] * nums[high];
                high--;
            }
        }
        return v; 
    }
};