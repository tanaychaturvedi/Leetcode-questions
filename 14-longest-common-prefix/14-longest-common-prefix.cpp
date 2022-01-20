class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
           int count;
    string s="";
    for(int i=0; i<strs[0].size(); i++){
        count=0;
        for(int j=1; j<strs.size(); j++){
            if(strs[j][i]==strs[0][i])
                count++;
            else
                return s;
        }
        s+=strs[0][i];
    }
    return s;
    }
};