class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();

        vector<int> ans;

        for(int ball = 0; ball < n; ball++){

            int row = 0; // ball always fall from 0th row
            int col = ball;// ball always fall from same col
            
            bool stuck = false;

            while(row < m && col < n){

                if(grid[row][col] == 1){
                    if(col == n-1 || grid[row][col+1] == -1){
                        stuck = true;
                        break;
                    } else{
                        col++;
                    }
                }
                else{
                    if(col == 0 || grid[row][col-1] == 1){
                        stuck = true;
                        break;
                    }
                    else{
                        col--;
                    }
                }
                row++;
            }
            if(stuck == true){
                ans.push_back(-1);
            }
            else{
                ans.push_back(col);
            }
        }
        return ans;
    }
};