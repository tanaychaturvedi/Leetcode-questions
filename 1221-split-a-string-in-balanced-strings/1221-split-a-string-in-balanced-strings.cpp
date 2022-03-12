class Solution {
public:
    int balancedStringSplit(string s) {
       int l=0;
        int r=0;
        int c=0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='R')r++;
            if(s[i]=='L')l++;
            if(l==r)c++;
        }
        return c;
        
    }
};