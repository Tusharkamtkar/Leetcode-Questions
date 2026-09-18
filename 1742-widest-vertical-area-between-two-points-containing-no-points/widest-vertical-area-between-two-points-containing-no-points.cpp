class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        sort(points.begin(), points.end());

        int n = points.size();

        int maxArea = 0;

        for(int i = 1; i < n; i++){

            int area =  points[i][0] - points[i-1][0];
            
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};