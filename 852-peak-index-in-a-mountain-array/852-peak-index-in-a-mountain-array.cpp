class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        for(int i=1;i<=arr.size()-2;i++) {
            if(arr[i]>arr[i-1] and arr[i]>arr[i+1])
                return i;
        }
        return -1;
    }
};