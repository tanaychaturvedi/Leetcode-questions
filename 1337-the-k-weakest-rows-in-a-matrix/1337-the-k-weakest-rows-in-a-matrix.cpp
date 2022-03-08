class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& vi, int k) {
        vector<int> v;
        for(auto i:vi) {
            int c=0;
            for(auto j:i) {
                if(j==1)c++;
            }
            v.push_back(c);
        }
        vector<pair<int,int>> a;
        
        for(int i=0;i<v.size();i++) {
            a.push_back({v[i],i});
        }
        sort(a.begin(),a.end(),[&](auto i,auto j){
        
            if(i.first==j.first){
                return i.second<j.second;
            }
            return i.first<j.first;
        });
        vector<int> x;
        for(int i=0;i<k;i++) x.push_back(a[i].second);
        return x;
    }
};