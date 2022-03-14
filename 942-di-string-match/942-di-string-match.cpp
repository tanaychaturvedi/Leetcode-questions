class Solution {
public:
  vector<int> diStringMatch(string s) {
        int i = 0, j = s.length();
        vector<int> result;
        result.reserve(s.length()+1);
        
        for (int x = 0; x <= s.length(); x++) {
            if (s[x] == 'I') {
                result.push_back(i++);
            } else {
                result.push_back(j--);
            }
        }
        
        return result;
    }
};