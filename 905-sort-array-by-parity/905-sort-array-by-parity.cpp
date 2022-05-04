class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
    vector<int> v1,v2;
        for(auto i:nums) {
            if(i%2==0)v2.push_back(i);
            else v1.push_back(i);
        }
        vector<int> ans;
        for(auto i:v2) ans.push_back(i);
        for(auto i:v1)ans.push_back(i);
        return ans;
        
    }
};