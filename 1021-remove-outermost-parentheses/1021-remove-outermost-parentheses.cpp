class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans="";
        for(auto i:s) {
          if(i=='(') {
              if(st.size()>0)ans+=i;
              st.push(i);
          }
            else {
              if(st.size()>1){
                    ans+=i;
                }
                st.pop();
                    
            }
        }
            return ans;
    }
};