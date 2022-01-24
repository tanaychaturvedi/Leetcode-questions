class Solution {
public:
    bool detectCapitalUse(string word) {
      string ans=word;
        transform(ans.begin(), ans.end(), ans.begin(), ::toupper);
      string su=word;
        transform(su.begin(), su.end(), su.begin(), ::tolower);
        string f=word;
        transform(f.begin(), f.end(), f.begin(), ::tolower);
        f[0]=toupper(f[0]);
        if(word==ans or word==su or word==f)
            return true;
        return false;

    }
};