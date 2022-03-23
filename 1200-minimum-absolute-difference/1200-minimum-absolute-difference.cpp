class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
     
        sort(a.begin(),a.end());
        int mn=INT_MAX;
        for(int i=1;i<a.size();i++) {
            mn=min(mn,a[i]-a[i-1]);
        }
        vector<vector<int>> v;
        for(int i=1;i<a.size();i++) {
          vector<int> x;
            if(a[i]-a[i-1]==mn)
            v.push_back({a[i-1],a[i]});
        }
        return v;
        
    }
};