class Solution {
public:
    string removeKdigits(string num, int k) {

        int n = num.size();

        stack<char> st;

        for (int i = 0; i < n; i++) {

            while (!st.empty() && st.top() > num[i] && k > 0) {
                st.pop();
                k--;
            }

            if(!st.empty() || num[i] != '0'){ // for avoiding 0024
                st.push(num[i]); 
            }
            
        }

        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        string ans = "";

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());

        if(ans == ""){
            return "0";
        }

        return ans;
    }
};