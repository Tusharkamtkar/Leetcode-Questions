class Solution {
public:
    int minimumDeletions(string s) {
        
        int n = s.size();

        int counta = 0;
        for(int i = n-1; i >= 0; i--){
            if(s[i] == 'a'){
                counta++;
            }
        }

        int minCount = INT_MAX;
        int countb = 0;

        for(int i = 0; i < n; i++){

            if(s[i] == 'a'){
                counta--;
            }

            minCount = min(minCount, counta + countb);

            if(s[i] == 'b'){
                countb++;
            }
        }
        return minCount;
    }
};