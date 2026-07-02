class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxOnes = 0;
        int index = 0;

        int rows = mat.size();
        int cols = mat[0].size();

        for(int i = 0; i < rows; i++){
            int countOnes = 0;

            for(int j = 0; j < cols; j++){
                if(mat[i][j] == 1){
                    countOnes++;
                }
            }
            if(countOnes > maxOnes){
                maxOnes = countOnes;
                index = i;
            }
        }
        return {index, maxOnes};
    }
};