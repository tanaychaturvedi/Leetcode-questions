class Solution {
public:
    int subtractProductAndSum(int n) {
        int pr=1;
        int sum=0;
        while(n) {
            pr*=n%10;
            sum+=n%10;
            n/=10;
            
        }
        return (pr-sum);
    }
};