class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int mx=0;
        for(auto i: s)
        {int count=0;
         string word;
            stringstream s(i);
             while (s >> word)
        count++;
            mx=max(mx,count);
        }
        return mx;
    }
};