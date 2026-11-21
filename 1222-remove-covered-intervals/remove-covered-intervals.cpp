class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        int n = intervals.size();

        int lastInterval = 0;

        int count  = 1; // coz any 1 is always be the biggest range

        auto lambda = [](vector<int> vec1, vector<int> vec2){

            if(vec1[0] == vec2[0]){
                return vec1[1] >= vec2[1];
            }
            return vec1[0] <= vec2[0];
        };

        sort(intervals.begin(), intervals.end(), lambda);

        lastInterval = intervals[0][1];

        for(int i = 1; i < n; i++){

            if(lastInterval >= intervals[i][1]){
                continue;
            }

            lastInterval = intervals[i][1];
            count++;
        }
        return count;
    }
};