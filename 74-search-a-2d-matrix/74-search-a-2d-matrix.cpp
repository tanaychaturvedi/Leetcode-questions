class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        for(auto i:m) {
            for(auto j:i) {
                if(j==target)return true;
            }
        }
        return false;
    }
};