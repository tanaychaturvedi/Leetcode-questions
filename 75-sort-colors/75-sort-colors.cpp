class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int lo=0;
        int mid=0;
        int high=n-1;
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[lo++],nums[mid++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high--]);
                    break;
                    
            
                    
                    
            }
        }
    }
};