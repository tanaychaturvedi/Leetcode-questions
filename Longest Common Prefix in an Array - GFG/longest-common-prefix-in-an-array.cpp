// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string small=arr[0];
       
       //find smallest string
       for(int i=1;i<N;i++)
       {
           if(arr[i].length()<small.length())
               small=arr[i];
       }
       
      for(int i=0;i<N;i++)
      {
           int x=small.length(),y=x,k=0,len=0;
          
           string s="",s2=arr[i];
           
          while(y>0)
          {
              if(s2[k]!=small[k])
              {
                  if(len==0)
                   {
                       return "-1";
                   }
                  
                  if(len<x)
                     small=s;
                   
              }
              else
              {
                  len++;
                  
                  s+=s2[k];
              }
              
              y--,k++;
          }
      }
      
      return small;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends