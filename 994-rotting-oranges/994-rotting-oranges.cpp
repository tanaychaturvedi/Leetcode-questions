class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int time =0;        // to keep track of no of minutes
        int fresh =0;        // to keep track on no of fresh oranges
        
        int rows = grid.size();
        int cols = grid[0].size();
        
        // find no of fresh oranges and push the rooten oranges to queue
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]==1)
                {
                    fresh++;
                }
                if(grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        
        vector<vector<int>> directions = {{0,1},{0,-1},{1,0},{-1,0}}; // to move right,left,down,top from current cell
        
        while(!q.empty() && fresh>0)
        {
            for(int i=q.size();i>0;i--)  // note that for(int i=0;i<q.size();i++) will not work // instead int size = q.size while(size--), can also be used
            {
            pair<int,int> rc = q.front();
            q.pop();
            int r =rc.first;
            int c = rc.second;
            for(auto a:directions)
            {
                int row = a[0]+r;
                int col = a[1]+c;
                
                if(row<0 || row == grid.size() || col<0 || col==grid[0].size() || grid[row][col]!=1)
                {
                    continue;
                }
                grid[row][col]=2;
                q.push({row,col});
                fresh-=1;
            }
            }
            time+=1;
        }
        if(fresh==0)
        {
            return time;
        }
        return -1;
    }
};