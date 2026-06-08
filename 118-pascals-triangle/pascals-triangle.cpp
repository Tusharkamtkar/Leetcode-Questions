class Solution {
public:
    vector<vector<int>> generate(int numRows) {
          vector<vector<int>> ans;

        for(int row = 0; row<numRows;row++){
        vector<int> generatedRow;
    
        for(int col=0;col<=row;col++){
            if(col==0 || col==row)generatedRow.push_back(1);
            else{
                generatedRow.push_back(ans[row-1][col-1]+ans[row-1][col]);
            }
        }

        ans.push_back(generatedRow);
    }
return ans;
  }
};