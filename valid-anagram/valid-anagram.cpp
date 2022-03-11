class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m1,m2;
        for(auto i:s) {
            m1[i]++;
        }
        for(auto i:t) {
            m2[i]++;
        }
        if(m1==m2)return true;
        return false;
    }
};