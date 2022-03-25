// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        vector<string> v;
        string t="";
        for(auto i:s) {
            
            if(i!='.')
            t+=i;
            else
            {
             
                v.push_back(t);
                t="";
            }
            
        }
        v.push_back(t);
        reverse(v.begin(),v.end());
        string ans="";
        for(auto i:v){
            ans+=i;
            ans+='.';
        }
        ans.pop_back();
        
        return ans;
        // code here 
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends