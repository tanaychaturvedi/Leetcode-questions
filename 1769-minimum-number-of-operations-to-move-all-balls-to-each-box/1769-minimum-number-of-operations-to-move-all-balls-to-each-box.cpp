class Solution {
public:
    vector<int> minOperations(string b) {
        vector<int> v;
    
        for(int i=0;i<b.size();i++) {
            int sum=0;
            for(int j=i+1;j<b.size() ;j++)
            {
                if(b[j]=='1') {
                    sum+=abs(i-j);
                }
            }
            int k=i;
            while(k>=0) {
                if(b[k]=='1') {
                    sum+=abs(k-i);
                }
                k--;
            }
            
            v.push_back(sum);
            
        }
        return v;
    }
};