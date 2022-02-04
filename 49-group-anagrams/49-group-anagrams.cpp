class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>> m;
        vector<vector<string>> v;
        int n=s.size();
        for(int i=0;i<n;i++) {
            string temp=s[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(s[i]);
        }
        
        for(auto i: m)
        {
            v.push_back(i.second);
        }
        
        return v;
        
        
    }
};