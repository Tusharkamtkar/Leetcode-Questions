class Solution {
public:

    int findWaviness(int num){

        string s = to_string(num);

        int n = s.size();

        int score = 0;

        for(int i = 1; i <= n-2; i++){ // first nd last elements dont have peek and vally

            // peek
            if(s[i] > s[i-1] && s[i] > s[i+1]){
                score++;
            }

            // vally
            if(s[i] < s[i-1] && s[i] < s[i+1]){
                score++;
            }
        }
        return score;
    }
    int totalWaviness(int num1, int num2) {
        
        int score = 0;

        for(int i = num1; i <= num2; i++){
            
            score += findWaviness(i);
        }
        return score;
    }
};