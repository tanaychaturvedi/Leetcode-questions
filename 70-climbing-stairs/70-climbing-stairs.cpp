class Solution {
    int fibo(int n)
    {
        int a[n];
        a[0]=1;
        a[1]=1;
        for(int i=2;i<n;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        return a[n-1];
    }
public:
    int climbStairs(int n) {
        return fibo(n+1);
    }
};