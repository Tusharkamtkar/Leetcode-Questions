class Solution {
public:
    int maxDepth(string s) {
        // stack<char> st;

        // int ans = 0;

        // for(auto ch : s){
        //     if(ch == '('){
        //         st.push('(');
        //         ans = max(ans, (int)st.size());
        //     }
        //     else if(ch == ')' && !st.empty()){
        //         st.pop();
        //     }
        // }
        // return ans;

        int counter = 0;
        int ans = 0;

        for(auto ch : s){
            if(ch == '('){
                counter++;
                ans = max(ans, counter);
            }
            else if(ch == ')' && counter != 0){
                counter--;
            }
        }
        return ans;
    }
};