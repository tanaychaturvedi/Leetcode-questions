class Solution {
public:
    bool isValid(string st) {
        
        stack<char> s;
        for(auto i:st ) {
            char x=i;
            if(i=='(' or i=='{' or i=='[')s.push(x);
            else {
                if(s.size()==0)return false;
                char t=s.top();
                s.pop();
                if((t=='(' and i==')' ) or (t=='[' and i==']') or (t=='{' and  i=='}'))continue;
                else return false;
            }
        }
        if(s.size()==0)return true;
        return false;
    }
};