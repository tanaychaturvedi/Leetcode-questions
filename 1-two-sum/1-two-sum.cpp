class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<num.size();i++)
        {
            if((m.find(target - num[i]))!= m.end())
            {
                ans.push_back(m[target-num[i]]);
                ans.push_back(i);
                return ans;
            }
            m[num[i]]=i;
        }
        return ans;
        
        
    }
};