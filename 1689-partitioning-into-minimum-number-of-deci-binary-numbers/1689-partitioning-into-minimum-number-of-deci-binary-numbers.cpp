class Solution {
public:
    int minPartitions(string n) {
       int mx=0;
        for(auto i:n) {
            char c=i;
            int x=c-'0';
            mx=max(mx,x);
        }
        return mx;
        
    }
};