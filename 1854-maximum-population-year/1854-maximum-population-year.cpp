class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> v(101,0);
        for(auto i:logs) {
            v[i[0]-1950]++;
            v[i[1]-1950]--;
        }
        int sum=0;
        int mx=0;
        for(int i=0;i<v.size();i++) {
            sum+=v[i];
            mx=max(mx,sum);
            v[i]=sum;
        }
        for(int i=0;i<v.size();i++) {
            if(v[i]==mx)return 1950+i;
        }
        return -1;
        
    }
};