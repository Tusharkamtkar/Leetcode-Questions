class Solution {
public:
    void rotate(vector<vector<int>>& mat) {

        int n = mat.size();

        // find transpose!

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(mat[i][j], mat[j][i]);
            }
        }

        // reverse the matrix!

        for (int i = 0; i < n; i++) {
            reverse(mat[i].begin(), mat[i].end());
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {

        int n = mat.size();

        for (int rotation = 1; rotation <= 4; rotation++) {

            bool isEqual = true;

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (mat[i][j] != target[i][j]) {
                        isEqual = false;
                        break;
                    }
                }
                if (!isEqual)
                    break;
            }
            if (isEqual)
                return true;

            rotate(mat);
        }
        return false;
    }
};