class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> m;
        for(auto i:arr) {
            m[i]++;
        }
        vector<string> v;
        int c=0;
        for(auto i:m)if(i.second==1)v.push_back(i.first);
        for(auto i:arr) {
             if(m[i]==1)c++;
            if(m[i]==1 and c==k){
                return i;
            }
            
        }
        return "";
    }
};