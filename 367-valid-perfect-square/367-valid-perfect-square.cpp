class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)return true;
        long long l=1;
        long long h=num/2;
        
        while(l<=h) {
            long long mid=(l+h)/2;
            long long sq=mid*mid;
            if(sq==num) return true;
            else if(sq<num) {
                l=mid+1;
                
            }
            else {
                h=mid-1;
            }
            
        }
        return false;
        
    }
};