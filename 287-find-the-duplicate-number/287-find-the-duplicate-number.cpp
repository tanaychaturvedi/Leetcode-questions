class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums) m[i]++;
        for(auto i:m)if(i.second>1)return i.first;
        return -1;
    }
};