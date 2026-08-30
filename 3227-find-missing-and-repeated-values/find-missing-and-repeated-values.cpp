class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n =grid.size();

        int totalEle = n*n;

        unordered_map<int, int> freq;

        int doubleNo = -1;
        int missing = -1;

        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){

                freq[grid[i][j]]++;
            }
        }

        for(int num = 1; num <= totalEle; num++){

            if(!freq.count(num)){
                missing = num;
            }
            else if(freq[num] == 2){
                doubleNo = num;
            }
            if(doubleNo != -1 && missing != -1){
                break;
            }
        }

        return {doubleNo, missing};
    }
};