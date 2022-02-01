class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int a[n];
        int mx=0;
        for(int i=n-1;i>=0;i--)
        {
            mx=max(mx,p[i]);
            a[i]=mx;
            
        }
        mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,(a[i]-p[i]));
            
        }
        
        return mx;
        
    }
};