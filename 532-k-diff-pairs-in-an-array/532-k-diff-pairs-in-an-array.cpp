class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>> s;
       
        int count=0;
        for(int i=0;i<nums.size();i++)
            for(int j=i+1;j<nums.size();j++) {
                
                if(abs(nums[i]-nums[j])==k )
                {
                    s.insert({nums[i],nums[j]});
                }
                
            }
        return s.size();
        
    }
};