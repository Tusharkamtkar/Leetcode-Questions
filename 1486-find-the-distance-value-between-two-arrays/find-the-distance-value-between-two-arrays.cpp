class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        
        sort(arr2.begin(), arr2.end());

        int ans = 0;

        int m = arr1.size();
        int n = arr2.size();

        for(int i = 0; i < m; i++){
            
            int j = lower_bound(arr2.begin(), arr2.end(), arr1[i]) - arr2.begin(); // this will give jth index

            if(j == 0){
                ans += (arr2[0] - arr1[i]) > d;
            }

            else if(j >= n){
                ans += (arr1[i] - arr2[n-1]) > d;
            }

            else{
                ans += (arr2[j] - arr1[i] > d) && (arr1[i] - arr2[j-1] > d);
            }
        }
        return ans;
    }
};