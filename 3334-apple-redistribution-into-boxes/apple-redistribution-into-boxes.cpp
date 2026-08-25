class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
        sort(capacity.begin(), capacity.end(), greater<int>());

        int total = accumulate(apple.begin(), apple.end(), 0);

        int count = 0;
        int i = 0;

        while(total > 0){
            total -= capacity[i];
            count++;
            i++;
        }
        return count;
    }
};