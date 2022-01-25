class Solution {
public:
    int nthUglyNumber(int n) {
         if(n ==  1) {
            return n;
        }
        vector<int> dp(n, 0);
        dp[0] = 1;
        int two = 0, three = 0, five = 0;
        int dTwo = dp[two] * 2;
        int dThree = dp[three] * 3;
        int dFive = dp[five] * 5;
        for(int i=1; i<n; i++) {
            dp[i] = min(dTwo, min(dThree, dFive));
            if(dp[i] == dTwo) {
                two++;
                dTwo = dp[two] * 2;
            }
            if( dp[i] == dThree) {
                three++;
                dThree = dp[three] * 3;
            }
            if( dp[i] == dFive) {
                five++;
                dFive = dp[five] * 5;
            }
        }
        return dp[n-1];
    }
};