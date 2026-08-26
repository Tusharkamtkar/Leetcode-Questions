class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
         
         vector<int>vec(100);

         int result = 0;
          
          for(auto &domino : dominoes){
            if(domino[0] > domino[1]){
                swap(domino[0] , domino[1]);
            }

            int num = domino[0] * 10 + domino[1];

            result += vec[num]; // freq!
            vec[num]++;
          }
          return result;
    }
};