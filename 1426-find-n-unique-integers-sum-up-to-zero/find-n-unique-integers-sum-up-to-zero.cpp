class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans(n, 0);

        int ele = 1;

        int i = 0;

        while(i+1 < n){

            ans[i] = ele;
            ans[i+1] = -ele;

            ele++;

            i+=2;
        }
        return ans;
    }
};