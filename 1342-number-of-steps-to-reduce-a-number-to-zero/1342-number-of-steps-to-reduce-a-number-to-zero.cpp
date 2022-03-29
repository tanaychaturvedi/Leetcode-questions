class Solution {
public:
    int numberOfSteps(int nums){
        int c=0;
        while(nums) {
            if(nums%2==1) nums-=1;
            else nums/=2;
            c++;
        }
        return c;
        
    }
};