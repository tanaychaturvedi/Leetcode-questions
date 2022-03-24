class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> s;
        int c =0;
        for(auto i:allowed)s.insert(i);
        for(auto i:words) {
           string t=i;
            int  j;
            for( j=0;j<t.size();j++)  {
                if(s.find(t[j])==s.end())break;
                
            }
            if(j==t.size())c++;
            
        }
        return c;
    }
};