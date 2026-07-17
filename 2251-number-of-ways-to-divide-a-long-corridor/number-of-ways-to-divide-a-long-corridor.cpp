class Solution {
public:
    int m = 1e9+7;
    int numberOfWays(string corridor) {
        int n = corridor.size();

        vector<int> seats_index;

        for(int i = 0; i<n; i++){ 
            if(corridor[i] == 'S'){
                seats_index.push_back(i);
            }
        }
        if(seats_index.size() % 2 != 0 || seats_index.size() == 0){
            return 0;
        }
        long long result = 1;

        int end_prev_index = seats_index[1];

        for(int i = 2; i < seats_index.size(); i+=2){
            int  length = seats_index[i] - end_prev_index;

            result = (result * length) % m;

            end_prev_index = seats_index[i+1];
        }
        return result;
    }
};