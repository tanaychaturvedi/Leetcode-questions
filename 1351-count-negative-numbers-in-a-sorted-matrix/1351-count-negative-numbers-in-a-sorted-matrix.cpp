class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {
        int c=0;
        for(auto i:v) {
            for(auto k:i) {
                if(k<0)c++;
            }
        }
        return c;
    }
};