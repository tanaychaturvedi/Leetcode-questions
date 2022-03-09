class Solution {
public:
    vector<int> getRow(int r) {
        vector<vector<int>> v;
        vector<int> q;
        q.push_back(1);
        v.push_back(q);
        q.push_back(1);
         v.push_back(q);
        
        for(int i=2;i<=r;i++) {
            vector<int> t;
            t.push_back(1);
            for(int j=1;j<i;j++) {
                t.push_back(v[i-1][j-1]+v[i-1][j]);
            }
            t.push_back(1);
            v.push_back(t);
            
        }
        vector<int> ans;
        for(int i=0;i<v[r].size();i++) {
            ans.push_back(v[r][i]);
        }
        return ans;
    }
};