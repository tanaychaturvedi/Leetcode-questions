class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        map<int ,char> m;
        for(int i=0;i<s.size();i++)
        {
            m[indices[i]]=s[i];
        }
        string ans="";
   
        for(auto i:m)
        ans+=i.second;
        return ans;
    }
};