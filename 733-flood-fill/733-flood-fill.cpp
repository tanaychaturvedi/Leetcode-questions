class Solution {
public:
    void dfs (vector<vector<int>>& image, int sr, int sc, int newColor, int source, int m ,int n) {
        if(sr<0 or sr>=m or sc<0 or sc>n)return ;
        else if(image[sr][sc]!=source)return ;
        image[sr][sc] = newColor;
        dfs(image,sr+1,sc,newColor,source,m,n);
        dfs(image,sr-1,sc,newColor,source,m,n);
        dfs(image,sr,sc+1,newColor,source,m,n);
        dfs(image,sr,sc-1,newColor,source,m,n);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        
        if(newColor == image[sr][sc] )return  image;
        int m=image.size();
        int n=image[0].size();
        int source=image[sr][sc];
        dfs(image,sr,sc,newColor,source,m,n);
        return image;
    }
};