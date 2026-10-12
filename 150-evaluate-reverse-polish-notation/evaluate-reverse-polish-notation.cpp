class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        stack<int> st;
        
        unordered_map<string, function<int (int, int)>> mpp = {

            {"+", [](int op1, int op2) {return op1 + op2;} },
            {"-", [](int op1, int op2) {return op1 - op2;} },
            {"*", [](int op1, int op2) {return (long)op1 * (long)op2;} }, // can exceed value
            {"/", [](int op1, int op2) {return op1 / op2;} },
        };

        for(string token : tokens){

            if(token == "+" || token == "-" || token == "*" || token == "/"){

                int op2 = st.top();
                st.pop();

                int op1 = st.top();
                st.pop(); 

                int tempAns = mpp[token](op1, op2);

                st.push(tempAns);
            }
            else{
                st.push(stoi(token)); // it is an no.
            }
        }
        return st.top();
    }
};