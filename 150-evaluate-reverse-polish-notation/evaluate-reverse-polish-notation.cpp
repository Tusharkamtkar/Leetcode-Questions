class Solution {
public:

    int solve(int op1, int op2, string token){

        if(token == "+"){
            return op1 + op2;
        }
        if(token == "-"){
            return op1 - op2;
        }
        if(token == "*"){
            return op1 * op2;
        }
        if(token == "/"){
        return op1 / op2;
        }
        return 0;
    }

    int evalRPN(vector<string>& tokens) {
        
        stack<int> st;

        for(string &token : tokens){

            if(token == "+" || token == "-" || token == "*"|| token == "/"){

                int op2 = st.top();
                st.pop();

                int op1 = st.top();
                st.pop();

                int tempAns;

                tempAns = solve(op1, op2, token); // fun for convertion of "" to no and solving it

                st.push(tempAns); // in next it will use as op
            }
            else{
                st.push(stoi(token)); // it is an number
            }
        }
        return st.top(); // ans is always at top of stack
    }
};