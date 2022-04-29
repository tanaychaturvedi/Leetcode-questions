class Solution {
public:
    
    void solve(vector<int> v,set<pair<int,int>>&s) {
        int x=v[0];
        int y=v[1];
        int r=v[2];
       for(int i=x-r;i<=x+r;i++)
            for(int j=y-r;j<=y+r;j++)
                if(sqrt((x-i)*(x-i) + (y-j)*(y-j)) <= r)      //checks if distance of point from center is les than or equal to radius
                    s.insert({i,j});
    }
    
    int countLatticePoints(vector<vector<int>>& circles) {
        set<pair<int,int>> s;
        for(auto i:circles) {
            solve(i,s);
        }
        return s.size();
        
    }
};