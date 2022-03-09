class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int> (n, 0));
        int total = n*n;
        int count = 1;
        
        int startRow = 0;
        int endCol = n-1;
        int endRow = n-1;
        int startCol = 0;
        
        while(count <= total){
            //print start row
            for(int i=startCol; count <= total && i<=endCol; i++){
                ans[startRow][i] = count++;
            }
            startRow++;
            
            //print end col
            for(int i=startRow; count <= total && i<=endRow; i++){
                ans[i][endCol] = count++;
            }
            endCol--;
            
            //print end row
            for(int i=endCol; count <= total && i>=startCol; i--){
                ans[endRow][i] = count++;
            }
            endRow--;
            
            //print 1st row
            for(int i=endRow; count <= total && i>=startRow; i--){
                ans[i][startCol] = count++;
            }
            startCol++;
        }
        return ans;
        
    }
};