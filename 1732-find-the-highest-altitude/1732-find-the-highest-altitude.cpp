class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        for(int i=0;i<gain.size();i++) {
            sum+=gain[i];
            gain[i]=sum;
        }
        int mx=INT_MIN;
        for(auto i:gain) {
            mx=max(mx,i);
        }
        return max(mx,0);
    
    }
};