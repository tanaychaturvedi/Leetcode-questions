class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector <int> s;
        int low = 0;
        int high = nums.size() -1;
        int index = 0;
        int i = 0;
        int j = 0;
        
        
        while (low <= high) {
            index = low + (high-low)/2;
            if (nums[index] == target) {
                i = index;
                j = index;
                while (i >= 0 && nums[i] == target) {
                    i --;
                }
                while (j <= nums.size()-1 && nums[j] == target)
                    j++;
                s.emplace_back(i+1);
                s.emplace_back(j-1);
                return s;
            }
            if (nums[index] < target)
                low = index +1;
            if (nums[index] > target)
                high = index -1;
        }
        
        s.emplace_back (-1);
        s.emplace_back (-1);
        return s;
    }
};