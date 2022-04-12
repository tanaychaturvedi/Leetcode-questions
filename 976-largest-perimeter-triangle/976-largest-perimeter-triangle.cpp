class Solution 
{
public:
    int largestPerimeter(vector<int>& nums) 
    {
        std::sort(nums.begin(), nums.end(), std::greater<int>());
        for (int i = 2; i < nums.size(); i++)
        {
            if (nums[i - 2] < nums[i - 1] + nums[i])
                return nums[i - 2] + nums[i - 1] + nums[i];
        }
        
        return 0;
    }
};