class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums) {
            m[i]++;
            
        }
        // for(auto i:m)
        //     cout<<i.first<<" "<<i.second<<endl;
        vector<int> v;
       int ans=0;
        for(auto i:m)
        { int c=0;
            if(i.second<=2) {
              
                c+=i.second;
            }
            else {
                
                c+=2;
            }
            
              for(int x=0;x<c;x++) {
                    v.push_back(i.first);
                }
         ans+=c;
        }
        nums.clear();
        nums=v;
      
        return ans;
    }
};