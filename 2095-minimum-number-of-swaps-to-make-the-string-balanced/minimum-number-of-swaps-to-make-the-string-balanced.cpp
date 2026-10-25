class Solution {
public:
    int minSwaps(string s) {
        
        int n = s.size();

        stack<char> st;

        for(int i = 0; i < n; i++){

            if(s[i] == '['){
                st.push(s[i]);
            }
            else if(!st.empty()){
                st.pop();
            }
        }
        int swaps = (st.size() + 1) / 2 ;

        return swaps;
    }
};