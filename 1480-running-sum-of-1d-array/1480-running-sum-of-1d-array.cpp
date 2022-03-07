class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=0;
        vector<int> v;
        for(auto i:nums) {
            sum+=i;
            i=sum;
            v.push_back(i);
        }
        return v;
    }
};