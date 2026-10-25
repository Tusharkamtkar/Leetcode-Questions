class Solution {
public:

    bool check(stack<char> &st, string &part, int n){

        stack<char> temp = st; // taking an temp st for performing ops.

        for(int i = n-1; i >= 0; i--){ // coz stack stroes in reverse order
            if(temp.top() != part[i]){
                return false;
            }
            else{
                temp.pop();
            }
        }
        return true;
    }
    
    string removeOccurrences(string s, string part) {
        
        stack<char> st;

        int m = s.size();
        int n = part.size();

        for(int i = 0; i < m; i++){
            st.push(s[i]);

            if(st.size() >= n && check(st, part, n) == true){
                for(int j = 0; j < n; j++){
                    st.pop();
                }
            }
        }

        string ans = "";

        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};