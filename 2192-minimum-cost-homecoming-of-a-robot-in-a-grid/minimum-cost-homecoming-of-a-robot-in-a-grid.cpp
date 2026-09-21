class Solution {
public:
    int minCost(vector<int>& startPos, vector<int>& homePos, vector<int>& rowCosts, vector<int>& colCosts) {
        
        int row1 = startPos[0], col1 = startPos[1];

        int row2 = homePos[0],  col2 = homePos[1];

        int minCost = 0;

        // moving in rows
        if(row2 > row1){ // downSide traversell

            for(int r = row1+1; r <= row2; r++){
                minCost += rowCosts[r];
            }
        } else{ // upSide moves 
            for(int r = row1 - 1; r >= row2; r--){
                minCost += rowCosts[r];
            }
        }

        if(col2 > col1){ // rightSide traversell

            for(int c = col1+1; c <= col2; c++){
                minCost += colCosts[c];
            }
        } else{
            for(int c = col1 - 1; c >= col2; c--){
                minCost += colCosts[c];
            }
        }
        return minCost;
    }
};