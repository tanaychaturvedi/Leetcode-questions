class Solution {
public:
    int minSteps(string s, string t) {
        map<char,int> m;
        int c=0;
        for(auto i:s)m[i]++;
        for(auto i:t)m[i]--;
        for(auto i:m)c+=abs(i.second);
        cout<<c/2<<endl;
        return c/2;
        
    }
};