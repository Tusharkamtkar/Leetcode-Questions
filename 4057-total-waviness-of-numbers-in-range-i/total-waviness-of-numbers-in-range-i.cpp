class Solution {
public:

    int waviness(int i){

        string s = to_string(i);

        int n = s.size();

        if(n < 3){
            return -0; // coz 2 elements dont have peek nd vally
        }

        int score = 0;

        for(int i = 1; i <= n-2; i++){ // first nd last el dont have peek or vally
            
            // PEEK
            if(s[i] > s[i-1] && s[i] > s[i+1]){
                score++;
            }

            // Vally
            if(s[i] < s[i-1] && s[i] < s[i+1])
                score++;
        }
        return score;
    }

    int totalWaviness(int num1, int num2) {
        
        int score = 0;

        for(int i = num1; i <= num2; i++){

            score += waviness(i);
        }
        return score;
    }
};