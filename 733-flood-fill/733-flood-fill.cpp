class Solution {
    
    void solve(vector<vector<int>>& i, int sr, int sc, int c,int m,int n,int tar) {
        
        if(sr>m-1 or sr<0 or sc>n-1 or sc<0 or i[sr][sc]==c or i[sr][sc]!=tar)return;
        i[sr][sc]=c;
        solve(i,sr+1,sc,c,m,n,tar);
        solve(i,sr,sc+1,c,m,n,tar);
        solve(i,sr-1,sc,c,m,n,tar);
        solve(i,sr,sc-1,c,m,n,tar);

        
    }
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& i, int sr, int sc, int c) {
        int m=i.size();
        int n=i[0].size();
        solve(i,sr,sc,c,m,n,i[sr][sc]);
        return i;
    }
};