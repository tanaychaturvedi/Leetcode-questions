class Solution {
public:
    double average(vector<int>& s) {
        sort(s.begin(),s.end());
        double c=0;
        int n=s.size();
        for(int i=1;i<n-1;i++) c+=s[i];
        
        return c/(n-2);
    }
};