class Solution {
public:
    void sortColors(vector<int>& nums) {
	    int idx1 = -1;
		int idx2 = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                if (idx2 != -1) {
                    std::swap(nums[i], nums[idx2]);
                    if (idx1 != -1) {
                        std::swap(nums[idx2], nums[idx1]);
                    }
                } else {
                    if (idx1 != -1) {
                        std::swap(nums[i], nums[idx1]);
                    }
                }
                
                if (idx2 != -1) {
                    idx2++;
                }
                if (idx1 != -1) {
                    idx1++;
                }
            } else if (nums[i] == 1) {
                if (idx2 != -1) {
                    std::swap(nums[i], nums[idx2]);
                }
                
                if (idx2 != -1) {
                    idx2++;
                }
                
                if (idx1 == -1) {
                    if (idx2 == -1) {
                        idx1 = i;
                    } else {
                        idx1 = idx2 - 1;
                    }
                }
            } else {
                if (idx2 == -1) {
                    idx2 = i;
                }
            }
        }
    }
};