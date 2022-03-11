class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        vector<int> ans;
        int i;
        for( i=v.size()-1;i>=0;i--) {
            if(v[i]!=9){v[i]++;return v;}
            else {v[i]=0;}
                
        }
        if(i==-1){ans.push_back(1);
                for(int i=0;i<v.size();i++)
                    ans.push_back(0);}
        return ans;
    }
};