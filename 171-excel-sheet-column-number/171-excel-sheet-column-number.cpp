class Solution {
public:
    int titleToNumber(string s) {
        int sum=0;
        int n= s.size();
        
        for(int i=0;i<n;i++) {
            int x= s[i]-'A'+1;
            sum=sum*26 + x;
            
        }
        return sum;
        
    }
};