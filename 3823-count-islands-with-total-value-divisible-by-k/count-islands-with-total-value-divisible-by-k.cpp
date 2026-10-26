class Solution {
public:

    int m , n;
    vector<vector<int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    long long dfs(int i, int j, vector<vector<int>> &grid){

        long long sum = grid[i][j];
        grid[i][j] = 0; //making it visited

        for(vector<int> &dir : directions){

            int I = i + dir[0];
            int J = j + dir[1];

            if(I >= 0 && I < m &&
               J >= 0 && J < n &&
               grid[I][J] > 0){

               sum += dfs(I, J, grid);
            }
        }
        return sum;
    }

    int countIslands(vector<vector<int>>& grid, int k) {
        
        m = grid.size();
        n = grid[0].size();

        int count = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){

                if(grid[i][j] > 0){
                    long long sum = dfs(i, j, grid);

                    if((sum % k) == 0){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};