class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int n=nums.size();
        for(auto i:nums)m[i]++;
        for(auto i:m)if(i.second>n/2)return i.first;
        return 0;
    }
};