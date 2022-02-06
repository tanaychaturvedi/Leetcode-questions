class Solution {
public:    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor)
    {
        int val = image[sr][sc];
        int dx[4] = {0, 0, 1, -1};
        int dy[4] = {1, -1, 0, 0};
        queue<pair<int,int>> q;
        q.push({sr,sc});
        while(!q.empty()){
            pair<int,int> node= q.front();
            q.pop();
            image[node.first][node.second]=newColor;
            for(int i=0;i<4;i++){
                int nx=node.first+dx[i], ny=node.second+dy[i];
                if(nx<0 or ny<0 or nx>=image.size() or ny>=image[0].size() or image[nx][ny] != val or image[nx][ny]==newColor){
                    continue;
                }
                image[nx][ny]=newColor;
                q.push({nx,ny});
            }
        }
        return image;
    }
};