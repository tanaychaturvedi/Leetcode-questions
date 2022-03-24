class Solution {
public:

    int numRescueBoats(vector<int>& people, int limit) {
        
        vector<int> mp(30001, 0);
        for(auto it:people) {
            mp[it]++;
        }
        
        int count=0;
        for(int i=0;i<people.size();i++) {
            if(mp[people[i]]>0) {
                int target = limit-people[i];
                mp[people[i]]--;
                while(mp[target]<=0 && target>=1) {
                    target--;
                }
                count++;
                if(target>=1) {
                    mp[target]--;
                }  
            }
        }
        return count   ;
    }
};