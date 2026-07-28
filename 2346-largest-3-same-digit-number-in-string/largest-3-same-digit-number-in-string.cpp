class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.size();

        string temp = "";
        string ans = "";

        for(int i = 0; i < n; i++){
            int j = i + 1;
            int k = j + 1;

            if(k < n && num[i] == num[j] && num[j] == num[k]){
                temp += num[i];
                temp += num[j];
                temp += num[k];

                ans = max(ans, temp);
                temp = "";
            }
        }
        return ans;
    }
};