
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& a) {
        
        int n=a.size();
        
        vector<int> v;
        int c=0;
        for(int i=1;i<n-1;i++)
        {
           int x=a[i]-a[i-1];
           if(a[i+1]-a[i]==x)
           {
               c++;
           }else{
               cout<<c;
                v.push_back(c+2);
                c=0;
            } 
        }
        int ans=0;
        if(c!=0){
v.push_back(c+2);
        }
      for(auto i:v)
      {
          if(i>=3)
          {
             int x=(i-2);
             ans+= (x*(x+1))/2;
          }     
      }
        return ans;
    }
};