class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        int n=nums.size();
        string s="";
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]-nums[i+1]>0)
                s.push_back('t');
            else if(nums[i]-nums[i+1]==0)
                s.push_back('z');
            else
                s.push_back('f');
            
        }
        cout<<s<<endl;
        int i=0;
        int mx1=0;
        int mx2=0;
        
    
            
        
        if(s[0]=='f' or s[0]=='z')
        {
             int t=0;
            for(i=0;i<n-1;i++)
            {
               if(s[i]!='z'){
                if(t==0 && s[i]=='f')
                {
                    t=1;
                    mx1++;
                }
                else if(t==1 && s[i]=='t')
                {
                    t=0;
                    mx1++;
                }
               }
                
                    
            }
            
        }
        if(s[0]=='z' or s[0]=='t')
        {
            int t=1;
             for(i=0;i<n-1;i++)
            {
                if(s[i]!='z')
                    
                {  
                 if(t==0 && s[i]=='f')
                {
                    t=1;
                    mx2++;
                }
                else if(t==1 && s[i]=='t')
                {
                    t=0;
                    mx2++;
                }
                }
            }
        }
        return 1+max(mx1,mx2);
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         string x="";
//         int odd=0;
//         for(int i=0;i<n-1;i++)
//         {
      
//             if(odd==0)
//             {
//                 x.push_back('f');
//                 odd=1;
//             }
//             else
//             {
//                 odd=0;
//                 x.push_back('t');
//             }
            
//         }
        
        
        
        
        
        
//         string y="";
//         odd=0;
//         for(int i=0;i<n-1;i++)
//         {
      
//             if(odd==0)
//             {
//                 y.push_back('t');
//                 odd=1;
//             }
//             else
//             {
//                 odd=0;
//                 y.push_back('f');
//             }
            
//         }
//         cout<<s<<endl;
//         cout<<x<<endl;
//         cout<<y<<endl;
        
//         int mx1=0;
//         int mx2=0;
//         int temp=0;
        
//         for(int i=0;i<n-1;i++)
//         {
//             if(s[i]==x[i])
//             {
//                 mx1++;
//             }
                 
//         }
        
//         temp=0;
        
//           for(int i=0;i<n-1;i++)
//         {
//             if(s[i]==y[i])
//             {
//                 mx2++;
//             }
       
//         }
        
//         return 1+ max(mx1,mx2);
        
        
       
        
        
        
        
        
    }
};

