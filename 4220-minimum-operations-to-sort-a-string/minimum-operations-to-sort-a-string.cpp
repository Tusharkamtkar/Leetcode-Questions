class Solution {
public:
    int minOperations(string s) {
        
        int n = s.size();

        char mini = s[0], maxi = s[0];

        bool isSorted = 1;

        for(int i = 1; i < n; i++){

            if(s[i] < s[i-1]) isSorted = 0;

            mini = min(mini, s[i]);
            maxi = max(maxi, s[i]);
        }

        if(isSorted) return 0;

        if(n == 2){
            return -1;
        }

        if(s.front() == mini || s.back() == maxi){
            return 1;
        }

        for(int i = 1; i < n-1; i++){
            if(s[i] == mini || s[i] == maxi){
                return 2;
            }
        }
        return 3;
    }
};