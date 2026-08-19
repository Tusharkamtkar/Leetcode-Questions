class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        
        int n = dimensions.size();

        int maxDiagonal = 0;
        int maxArea = 0;

        for(int i = 0; i < n; i++){

            int l = dimensions[i][0];
            int w = dimensions[i][1];

            int currDiagonal = l*l + w*w;
            int currArea = l * w;

            if(currDiagonal > maxDiagonal){
                maxDiagonal = currDiagonal;
                maxArea = currArea;
            }
            else if(currDiagonal == maxDiagonal){
                maxArea = max(maxArea, currArea);
            }
        }
        return maxArea;
    }
};