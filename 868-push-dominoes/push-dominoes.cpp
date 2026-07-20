class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();

        vector<int> leftClosestR(n);
        vector<int> rightClosestL(n);

        for(int i = 0; i < n; i++){ // moves from left to right to find force of R
            if(dominoes[i] == 'R'){
                leftClosestR[i] = i;
            }
            else if(dominoes[i] == '.'){
                leftClosestR[i] = i > 0 ? leftClosestR[i-1] : -1;
            }
            else{
                leftClosestR[i] = -1;
            }
        }

        for(int i = n-1; i >= 0; i--){ // moves from roght to left to find force of L
            if(dominoes[i] == 'L'){
                rightClosestL[i] = i;
            }
            else if(dominoes[i] == '.'){
                rightClosestL[i] = i < n-1 ? rightClosestL[i+1] : -1;
            }
            else{
                rightClosestL[i] = -1;
            }
        }

        string result = string(n, ' ');

        for(int i = 0; i < n; i++){
            int distLeftR = abs(i - leftClosestR[i]);
            int distRightL = abs(i - rightClosestL[i]); 

            if(leftClosestR[i] == rightClosestL[i]){
                result[i] = '.';
            }
            else if(leftClosestR[i] == -1){
                result[i] = 'L';
            }
            else if(rightClosestL[i] == -1){
                result[i] = 'R';
            }
            else if(distLeftR == distRightL){
                result[i] = '.';
            }
            else{
                result[i] = distLeftR < distRightL ? 'R' : 'L';
            }
        }
        return result;
    }
};