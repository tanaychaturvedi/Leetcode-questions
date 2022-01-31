class Solution {
public:
    int maximumWealth(vector<vector<int>>& v) {
        
        int sum=0;
        int mx=0;
        for(auto i:v)
        {
            for(auto j:i)
                sum+=j;
            mx=max(mx,sum);
            sum=0;
        }
        return mx;
    }
};