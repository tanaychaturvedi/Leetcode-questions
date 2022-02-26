class Solution {
public:
    
    bool dfs(int i,int j,vector<vector<int>>& g,int m,int n ) {
        
        if(i<0 or j<0 or i>m-1 or j>n-1) return false;
    
        if(g[i][j]==1)return true;
            
        g[i][j]=1;
        
        bool x1=dfs(i+1,j,g,m,n);
        bool y1=dfs(i,j+1,g,m,n);
        bool x2=dfs(i-1,j,g,m,n);
        bool y2=dfs(i,j-1,g,m,n);
        
        return   x1 and x2 and y1 and y2;
        
        
    }
        
    
    
    int closedIsland(vector<vector<int>>& g) {
        int m =g.size();
        int n =g[0].size();
        int c=0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(g[i][j]==0)
                if(dfs(i,j,g,m,n))c++;
            }
        }
        return c;
    }
};