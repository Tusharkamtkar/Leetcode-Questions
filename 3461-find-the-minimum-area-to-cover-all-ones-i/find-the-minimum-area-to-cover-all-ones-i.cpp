class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();

        int upperRow = m;
        int lowerRow = -1;
        
        int leftCol = n;
        int rightCol = -1;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){

                if(grid[i][j] == 1){

                    upperRow = min(upperRow, i);
                    lowerRow = max(lowerRow, i);

                    leftCol = min(leftCol, j);
                    rightCol = max(rightCol, j);
                }
            }
        }
        int ans = (lowerRow - upperRow + 1) * (rightCol - leftCol + 1);

        return ans;;
    }
};