class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for(auto i:s) {
            m[i]++;
        }
        int c=0;
        bool flag=0;
        
        
        for(auto i:m) {
            if(i.second%2==0)c+=i.second;
            else if(i.second> 2 ){c+=i.second-1;flag=1;}    
            else if(i.second=1)flag=1;
        }
        if(flag)return c+1;
        return c;
    }
};