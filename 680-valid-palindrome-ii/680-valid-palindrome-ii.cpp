class Solution {
public:
    bool ok(string &s,int i,int j,int deleted){
            if(i>j) return true;
            if(s[i]==s[j]){
              return ok(s,i+1,j-1,deleted);  
            }else if(s[i]!=s[j] and deleted){
              return false;
            }
               deleted=true;
               return (ok(s,i+1,j,deleted) || ok(s,i,j-1,deleted));
    }
    bool validPalindrome(string s) {
        
        bool deleted=false;
        int i=0,j=s.size()-1;
        return ok(s,i,j,deleted);
    }
};