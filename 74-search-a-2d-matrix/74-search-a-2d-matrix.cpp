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
        
        bool flag=0;
        int l=0;
        int floor=-1;
        int h=m.size()-1;
        while(l<=h)  {
            int mid= l+(h-l)/2;
            if(m[mid][0]<=target){
                floor=mid;
                l=mid+1;
                flag=1;
            }
            else {
                h=mid-1;
            }
            
        }   
        
        if(flag)
           if(binary(m[floor],target))return true;
        
        return false;
    }
};