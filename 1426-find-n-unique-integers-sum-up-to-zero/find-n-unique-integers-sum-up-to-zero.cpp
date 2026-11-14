class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans(n, 0);

        int i = 0;
        int j = n-1;

        int ele = 1;

        while(i < j){
            
            ans[i] = ele;
            ans[j] = -ele;

            ele++;

            i++;
            j--;
        }
        return ans;
    }
};