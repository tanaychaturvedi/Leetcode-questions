class Solution {
    
    int num(int x)
    {
        int count=0;
        while(x)
        {
          if(x&1)
              count++;
            x=x>>1;
        }
        return count;
    }
    
public:
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++)
        {int ans=0;
            ans+=num(i);
            v.push_back(ans);
        }
        
        return v;
    }
};