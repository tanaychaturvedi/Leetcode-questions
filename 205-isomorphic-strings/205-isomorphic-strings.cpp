class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp;
        unordered_map<char,int> already;
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]])
            {
                if(mp[s[i]] != t[i])
                {
                    return false;
                }
            }else{
                if(already[t[i]])
                {
                    return false;
                }else{
                    already[t[i]] = 1;
                    mp[s[i]] = t[i];
                }
            }
        }
        return true;
    }
};