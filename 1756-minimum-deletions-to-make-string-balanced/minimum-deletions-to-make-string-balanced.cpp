class Solution {
public:
    int minimumDeletions(string s) {
        
        int n = s.size();

        vector<int> right_a(n,0);

        int counta = 0;
        for(int i = n-1; i >= 0; i--){

            right_a[i] = counta;

            if(s[i] == 'a'){
                counta++;
            }
        }

        int countb = 0;
        int minCount = INT_MAX;

        for(int i = 0; i < n; i++){
            
            minCount = min(minCount, countb + right_a[i]);

            if(s[i] == 'b'){
                countb++;
            }
        }
        return minCount;
    }
};