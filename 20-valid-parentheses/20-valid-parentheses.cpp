class Solution {
public:
    bool isValid(string s) {
        int n= s.size();
        
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' or s[i]=='[' or s[i]=='{')
                st.push(s[i]);
            else 
            {
                if(st.size()==0)
                    return false;
                
                char ch= st.top();
                st.pop();
                  if((s[i] == ')' and ch == '(') or  (s[i] == ']' and ch == '[') or (s[i] == '}' and ch == '{')) continue;
                else return false;
            }
                
        }
    if(st.size()==0)
        return true;
        else
            return false;
        
    }
};