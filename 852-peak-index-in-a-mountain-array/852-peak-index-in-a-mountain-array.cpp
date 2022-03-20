class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        for(int i=1;i<a.size()-1;i++) {
            if(a[i]>a[i-1] and a[i]>a[i+1])return i;
        }
        return -1;
    }
};