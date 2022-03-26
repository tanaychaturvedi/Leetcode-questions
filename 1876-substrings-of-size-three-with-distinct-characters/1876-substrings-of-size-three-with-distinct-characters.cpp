class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        int result = 0;
        for (int i = 0; i < n-2; i++)
        {
            if (s[i] != s[i+1] and s[i] != s[i+2] and s[i+1] != s[i+2])
            {
                result++;
            }
        }
        return result;
        
    }
};