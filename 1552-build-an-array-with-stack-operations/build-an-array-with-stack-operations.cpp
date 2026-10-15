class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        stack<string> st;

        int stream = 1; // if n =3 stream = {1,2,3}

        int i = 0;

        while(i < target.size() && stream <= n){

            st.push("Push");

            if(target[i] == stream){
                i++;
            }
            else{
                st.push("Pop");
            }
            stream++;
        }

        vector<string> ans;

        i = 0;

        while(!st.empty()){

            ans.push_back(st.top());
            st.pop();
            i++;
        } 
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};