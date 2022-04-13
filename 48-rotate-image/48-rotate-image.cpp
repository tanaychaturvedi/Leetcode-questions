class Solution {
public:
    void rotate(vector<vector<int>>& g) {
        
        int m=g.size();
        int n=g[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<i;j++) {
                swap(g[i][j],g[j][i]);
            }
        }
      for(int i=0;i<m;i++) {
            reverse(g[i].begin(),g[i].end());
        }
        return;
    }
};