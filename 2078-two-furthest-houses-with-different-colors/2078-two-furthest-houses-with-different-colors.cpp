class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int mx=0;
       for(int i=0;i<colors.size();i++) {
           for(int j=1;j<colors.size();j++) {
               if(colors[i]!=colors[j]) {
                   mx=max(mx,abs(i-j));
               }
           }
       }
        return mx;
    }
};