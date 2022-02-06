class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int bot = triangle.size() - 1; bot >= 0; bot--)
            for(int i = 0; i < triangle[bot].size() - 1; i++)
                triangle[bot-1][i] += min(triangle[bot][i], triangle[bot][i+1]);
        return triangle[0][0];
    }
};