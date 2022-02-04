class Solution {
public:
    int findMaxLength(vector<int>& a) {
        unordered_map<int,int> m;
        int sum=0,mx=0;
        for(int i=0;i<a.size();i++) {
            if(!a[i])a[i]=-1;
            sum+=a[i];
            if(sum==0) {
                if(mx<i+1)
                    mx=i+1;
            }
            else if(m.find(sum)!=m.end()) {
                if(mx<i-m[sum])
                    mx=i-m[sum];
            }
            else
                m[sum]=i;
        }
        return mx;
    }
};