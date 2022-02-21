class Solution {
public:
    int firstUniqChar(string s) {
        map<int,int> m;
        for(auto i:s) {
            m[i]++;
        }
        for(int i=0;i<s.size();i++) {
            if(m[s[i]]==1)return i; 
        }
        return -1;
    }
};