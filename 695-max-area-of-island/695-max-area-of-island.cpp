class Solution {
public:
    int maxArea(vector<vector<int>> &a,int i, int j)
    {
        int count=0;
        count++;
        a[i][j]=0;
        if(j-1>=0 and a[i][j-1]==1)
            count+=maxArea(a,i,j-1);
        if(j+1<a[i].size() and a[i][j+1]==1)
            count+=maxArea(a,i,j+1);
        
        if(i-1>=0 and a[i-1][j]==1)
            count+=maxArea(a,i-1,j);
        if(i+1<a.size() and a[i+1][j]==1)
            count+=maxArea(a,i+1,j);
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                    maxi=max(maxi,maxArea(grid,i,j));
            }
        }
        return maxi;
    }
};