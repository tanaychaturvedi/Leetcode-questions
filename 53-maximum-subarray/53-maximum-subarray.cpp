class Solution {
public:
    int maxSubArray(vector<int>& a) {
   int sum=INT_MIN;
        int count=0;
        for(int i=0;i<a.size();i++)
        {
            count+=a[i];
            sum=max(sum,count);
            if(count<0)
                count=0;
        }
        return sum;
    }
};