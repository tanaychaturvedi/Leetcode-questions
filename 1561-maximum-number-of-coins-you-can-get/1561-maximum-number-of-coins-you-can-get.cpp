class Solution {
public:
    int maxCoins(vector<int>& p) {
        int n=p.size();
        
        sort(p.begin(),p.end());
        
        int sum=0;
        int x=n/3;
        for(int i=0;i<x;i++)
        {
           sum+=p[n-2-i*2]; 
        }
        return sum;
    
    }
};


//123456789
//012345678
