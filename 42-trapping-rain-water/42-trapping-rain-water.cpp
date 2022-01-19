class Solution {
public:
    int trap(vector<int>& height) {
          int n=height.size();
        int mx[n];
        int mn[n];
        int mv=INT_MIN;
        
        for(int i=0;i<n;i++)
        {
            mv=max(mv,height[i]);
            mx[i]=mv;
        }
        
        mv=INT_MIN;
        
        for(int i=n-1;i>=0;i--)
        {
            mv=max(mv,height[i]);
            mn[i]=mv;
        }
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x=min(mx[i],mn[i]);
            ans+=x-height[i];
        }
        return ans;
        
        
        
    }
};