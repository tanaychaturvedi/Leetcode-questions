class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> m;
        for(auto i: s) {
            m[i]++;
        }
        int x;
        for(auto i:m) {
            x=i.second;
            
        }
        for(auto i:m) {
            if(i.second!=x)return false;    
        }
        return true;
    }
};