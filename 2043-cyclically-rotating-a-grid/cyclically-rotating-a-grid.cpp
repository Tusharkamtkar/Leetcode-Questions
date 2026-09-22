class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        
        int m = grid.size();
        int n = grid[0].size();

        int layers = min(m/2, n/2);

        for(int layer = 0; layer < layers; layer++){

            vector<int>ans;

            int top = layer;
            int bottom = m - layer -1;

            int left = layer;
            int right = n - layer - 1;

            for(int i = left; i <= right; i++){ // top row (left to right)
                ans.push_back(grid[top][i]);
            }

            for(int j = top+1; j <= bottom-1; j++){ // right col (top to bottom) {skip cornors coz the are already done}
                ans.push_back(grid[j][right]);
            }

            for(int i = right; i >= left; i--){ // bottom row (right to left)
                ans.push_back(grid[bottom][i]);
            }

            for(int j = bottom-1; j >= top+1; j--){ // left row (bottom to top)
                ans.push_back(grid[j][left]);
            }

            int length = ans.size();

            int normalized_k = k % length; // bcoz if k > size it will remain same as before after some rotations 

            rotate(ans.begin(), ans.begin() + normalized_k, ans.end()); // rotate the ans by k times

            int idx = 0;

            for(int i = left; i <= right; i++){ // top row filling
                grid[top][i] = ans[idx++];
            }

            for(int j = top+1; j <= bottom-1; j++){ // right col
                grid[j][right] = ans[idx++];
            }

            for(int i = right; i >= left; i--){ // bottom row
                grid[bottom][i] = ans[idx++];
            }

            for(int j = bottom -1; j >= top+1; j--){ // left col
                grid[j][left] = ans[idx++];
            }
        }
        return grid;
    }
};