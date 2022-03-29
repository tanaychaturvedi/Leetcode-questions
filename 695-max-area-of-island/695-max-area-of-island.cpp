class Solution {
public:
    int c=0;
    
    void dfs(vector<vector<int>> &grid, int m, int n, int i ,int j) {
        if(i<0 or j<0 or i>=m or j>=n) {
            return ;
        }
        if(grid[i][j]!=1)return;
        grid[i][j]=2;
        c++;
        dfs(grid,m,n,i+1,j);
        dfs(grid,m,n,i-1,j);
        dfs(grid,m,n,i,j+1);
        dfs(grid,m,n,i,j-1);
        
        
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int mx=0;
        int n=grid[0].size();
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[0].size();j++) {
                if(grid[i][j]==1) {
                dfs(grid,m,n,i,j);
                mx=max(mx,c);
                c=0;
                }
            }
        }
        return mx;
    }
};