class Solution {
    int c=0;
    void dfs(int i,int j,vector<vector<int>>& g,int m,int n) {
        if(i<0 or j<0 or i>m-1 or j>n-1) {return;}
        if(g[i][j]!=1)return ;
        g[i][j]=2;
        c++;
        dfs(i+1,j,g,m,n);
        dfs(i,j+1,g,m,n);
        dfs(i-1,j,g,m,n);
        dfs(i,j-1,g,m,n);
    }
    
public:
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int mx=0;
        int m=g.size();
        int n=g[0].size();
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(g[i][j]==1) {
                    dfs(i,j,g,m,n);
                    mx=max(mx,c);
                    c=0;
                }
            }
        }
        return mx;
    }
};