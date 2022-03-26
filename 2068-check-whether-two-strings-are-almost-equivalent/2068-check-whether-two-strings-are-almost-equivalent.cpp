class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<int,int> m;
        for(auto i:word1)m[i]++;
        for(auto j:word2)m[j]--;
        for(auto i:m) {
            if(abs(i.second)>3)return false;
        }
        return true;
    }
};