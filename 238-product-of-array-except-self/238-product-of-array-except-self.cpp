class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> l;
        vector<int> r;
        vector<int > v;
        l.push_back(nums[0]);
          r.push_back(nums[nums.size()-1]);
        int x=nums[0];
        int y=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++)
        {
            x*=nums[i];
            l.push_back(x);
         
        }
        
        for(int i=nums.size()-2;i>=0;i--)
        {
            y*=nums[i];
            r.push_back(y);
               cout<<y<<endl;
        }
        reverse(r.begin(),r.end());
        
        v.push_back(r[1]);
        for(int i=1;i<nums.size()-1;i++)
        {
            v.push_back(l[i-1]*r[i+1]);
        }
        
        v.push_back(l[nums.size()-2]);
        
        return v;
        
    }
};