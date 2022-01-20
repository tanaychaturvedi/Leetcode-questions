class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> m;
        for(int i=0;i<stones.size();i++)
            m[stones[i]]++;
        int ans=0;
        for(int i=0;i<jewels.size();i++)
        {
            ans+=m[jewels[i]];
        }
    
    return ans;
    }
};