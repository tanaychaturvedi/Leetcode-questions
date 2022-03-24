class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> m;
        int i=0;
        int c=0;
        int count=0;
    int n=nums.size();
        while(i<n) {
            c+=nums[i];
            if(c==k)count++;
            if(m.find(c-k)!=m.end()) count+=m[c-k];
            m[c]++;
            i++;
        }
        return count;
        
    }
};