class Solution {
public:

    int gridMax(vector<vector<int>> &grid, int row, int col){

        int maxVal = INT_MIN;

        // 3 x 3 matrix 

        for(int x = row; x <= row+2; x++){

            for(int y = col; y <= col+2; y++){

                maxVal = max(maxVal, grid[x][y]);
            }
        }
        return maxVal;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        
        int n = grid.size();

        vector<vector<int>> maxLocal(n-2, vector<int>(n-2));

        for(int row = 0; row < n-2; row++){

            for(int col = 0; col < n-2; col++){

                maxLocal[row][col] = gridMax(grid, row, col);
            }
        }
        return maxLocal;
    }
};