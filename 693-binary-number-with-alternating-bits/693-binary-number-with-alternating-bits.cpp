class Solution {
public:
    bool hasAlternatingBits(int n) {
       int x=n;
        vector<int> v;
        while(x) {
            v.push_back(x%2);
            x/=2;
        }
       bool flag=v[0];
        for(int i=1;i<v.size();i++) {
            if(v[i]==flag)return false;
            else
                flag=!flag;
        }
        return true;
     
    }
};