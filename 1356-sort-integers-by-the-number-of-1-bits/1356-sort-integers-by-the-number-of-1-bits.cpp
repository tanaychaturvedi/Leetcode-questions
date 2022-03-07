class Solution {
public:
    vector<int> sortByBits(vector<int>& a) {
        vector<pair<int,int>> ans;
        for(auto i:a) {
            int x=i;
            int y=x;
            int c=0;
            while(x) {
                int r=x%2;
                if(r==1)c++;
                x/=2;
            }
            ans.push_back({c,i});
            
        }
      vector<int> v;
        sort(ans.begin(),ans.end(),[&](auto &i,auto &j){
            if(i.first == j.first){
               return i.second < j.second;
            }
            return i.first < j.first;
        });
        for(auto &i : ans){
            v.push_back(i.second);
        }
        return v;
        
    }
};