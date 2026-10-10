class Solution {
public:
    string removeDuplicates(string s) {
        
        int n = s.size();

        stack<char> st;
        
        string ans = "";

        for(int i = 0; i < n; i++){

            if(st.empty() || st.top() != s[i]){
                st.push(s[i]);
            }
            else{ // it means same chars found
                st.pop();
            }
        }



        while(!st.empty()){

        ans.push_back(st.top());
        st.pop();
        }

        reverse(ans.begin(), ans.end()); // coz stack stores in reverse

        return ans;
    }
};