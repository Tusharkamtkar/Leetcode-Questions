class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans(n, 0);

        int i = 0;

        int element = 1;

        while(i+1 < n){ // for handeling odd nd even cases

            ans[i]  = element;
            ans[i+1] = - element;

            element++;

            i+=2;
        }

        return ans;
    }
};