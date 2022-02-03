class Solution {
public:
    
    void solve(int i,int s,vector<int> &ans,vector<int> &a,int sum,vector<vector<int>> &v) {
        
        if(i==a.size()) {
            
            if(sum==0)
                v.push_back(ans);
        return;
            
        }
        if(a[i]<=sum)
        
        {
        ans.push_back(a[i]);
        solve(i,s,ans,a,sum-a[i],v);
            ans.pop_back();
        }
            solve(i+1,s,ans,a,sum,v);
        
        
        
        
  }
    
    vector<vector<int>> combinationSum(vector<int>& a, int sum) {
        
        vector<vector<int>> v;
        vector<int> ans;
        solve(0,0,ans,a,sum,v);
        return v;
        
    }
};