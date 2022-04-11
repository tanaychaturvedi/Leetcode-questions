class Solution
{
public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {
        int n = grid.size();
        int m = grid[0].size();

        // finding the total number of elements
        int total = grid.size() * grid[0].size();

        // if k > total we have to repeat many operations
        // hence to avoid that we will use mod
        k = k % total;

        // if k == 0 no operation is required
        if (k == 0)
            return grid;

        // creating an array to store all elements
        int arr[total];
        int arr_ind = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                arr[arr_ind] = grid[i][j],
                arr_ind++;

        // now we will start iterating from index total - k
        // and replace all elements of grid by keep incrementing this value
        // arr_ind = (arr_ind + 1) % total
        arr_ind = total - k;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                grid[i][j] = arr[arr_ind],
                arr_ind = (arr_ind + 1) % total;

        // returning the grid
        return grid;
    }
};
