class Solution {
public:
    bool binary (vector<int> v,int target) {
        
        int l=0;
        int h=v.size()-1;
        while(l<=h) {
            int mid=l+(h-l)/2;
            if(v[mid]==target)return true;
            else if(v[mid]>target)h=mid-1;
            else l=mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& m, int target) {
        for(auto i:m) {
           if(binary(i,target))return true;
        }
        return false;
    }
};