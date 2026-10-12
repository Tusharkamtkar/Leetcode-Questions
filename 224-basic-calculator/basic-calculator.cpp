class Solution {
public:
    int calculate(string s) {

        stack<int> st; // for solving bracets ()
        
        long long number = 0;
        int result = 0;
        int sign = 1;

        for(char &ch : s){

            if(isdigit(ch)){
                number = (number * 10) + (ch - '0');
            }
            else if(ch == '+'){
                result += (number * sign);
                number  = 0;
                sign    = 1;
            }
            else if(ch == '-'){
                result += (number * sign);
                number  = 0;
                sign    = -1;
            }
            else if(ch == '('){ // fresh new begining for solving () first
                st.push(result);
                st.push(sign);

                result = 0; // for creating result of ()
                number = 0;
                sign = 1;
            }
            else if(ch == ')'){
                result += (number * sign);
                number = 0;

                int stack_sign = st.top(); // older sign before ()
                st.pop();

                int last_result = st.top(); // older result before ()
                st.pop();

                result *= stack_sign;
                result += last_result; 
            }
        }

        result += (number * sign); // for adding last digit

        return result;
    }
};