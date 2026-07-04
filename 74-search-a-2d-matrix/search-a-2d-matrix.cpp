class Solution {
public:

    bool bs(vector<int> row, int target){

        // BS!

        int low = 0;
        int high = row.size() - 1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(row[mid] == target){
                return true;
            }
            else if(row[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return false;

    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // O(n*m)!

        //  int n = matrix.size();
        //  int m = matrix[0].size();

        // for(int i = 0; i<n; i++){
        //     for(int j = 0; j<m; j++){
        //         if(matrix[i][j] == target){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        // O(n) + (log2m)! using BS
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i<n; i++){
            if(matrix[i][0] <= target && matrix[i][m-1] >= target){
                return bs(matrix[i], target);
            }
        }
        return false;
    }
};