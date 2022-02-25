class Solution {
    
    int binarys(int n,int l, int h, vector<int> &a) {
        
        if(l>h)return -1;
        
        int mid=l+(h-l)/2;
        if(a[mid]==n)return mid;
        else if(a[mid]>n) {
          return   binarys(n,l,mid-1,a);
        }
        else
           return binarys(n,mid+1,h,a);
        
    }
    
    
public:
    bool checkIfExist(vector<int>& a) {
        
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
             
          int x=binarys(2*a[i],0,a.size()-1,a);
            
            if(i!=x and x!=-1)return true;
            
        }
        return false;
        
    }
};