class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        for(auto i:m) {
           if(binary_search(i.begin(),i.end(),target))return true;
        }
        return false;
    }
};