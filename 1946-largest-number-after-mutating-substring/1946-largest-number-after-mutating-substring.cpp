class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int i = 0, n = num.size();
        while (i < n && num[i] >= change[num[i]-'0']+'0') i++;
        while (i < n && num[i] <= change[num[i]-'0']+'0') num[i++] = change[num[i]-'0']+'0';
        return num;
    }
};