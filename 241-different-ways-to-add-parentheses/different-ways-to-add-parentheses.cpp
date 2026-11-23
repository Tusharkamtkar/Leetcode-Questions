class Solution {
public:

    vector<int> solve(string expression){

        int n = expression.size();

        vector<int> result;

        for(int i = 0; i < n; i++){

            if(expression[i] == '+' || expression[i] == '-' || expression[i] == '*'){

                vector<int> left_split  = solve(expression.substr(0, i)); // from 0 to curr
                vector<int> right_split = solve(expression.substr(i+1)); // from curr + 1 to n

                for(int &x : left_split){
                    
                    for(int &y : right_split){

                        if(expression[i] == '+'){
                            result.push_back(x + y);
                        }
                        else if(expression[i] == '-'){
                            result.push_back(x - y);
                        }
                        else{
                            result.push_back(x * y); // expression[i] == '*'
                        }
                    }
                }
            }
        }

        if(result.empty()){

            // if expression has no +, -, * nd only 12345

            result.push_back(stoi(expression));
        }

        return result;
    }
    vector<int> diffWaysToCompute(string expression) {
        
        return solve(expression);
    }
};