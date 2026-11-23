class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        
        int m = arrays.size();

        int mini = arrays[0].front(); // coz they are sorted
        int maxi = arrays[0].back(); 

        int ans = 0;

        for(int i = 1; i < m; i++){

            int currMini = arrays[i].front();
            int currMaxi = arrays[i].back();

            ans = max({ans, abs(currMini - maxi), abs(currMaxi - mini)});

            mini = min(mini, currMini);
            maxi = max(maxi, currMaxi);
        }

        return ans;
    }
};