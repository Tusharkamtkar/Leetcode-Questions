class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        unordered_set<int> st(banned.begin(), banned.end());

        int sum = 0;
        int count = 0;

        for(int num = 1; num <= n; num++){

            if(st.find(num) != st.end()){
                continue;
            }

            if((sum + num) <= maxSum){
                sum += num;
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};