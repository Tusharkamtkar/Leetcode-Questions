class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        int n = s.size();

        map<string, string> mpp;

        for(auto &it : knowledge){
            mpp[it[0]] = it[1];
        }

        int i = 0;

        string result = "";
        string temp = "";

        bool bracketOpened = false;

        while(i < n){
            if(s[i] == '('){
                bracketOpened = true;
            }
            else if(s[i] == ')'){
                bracketOpened = false;

                result += mpp.count(temp) ? mpp[temp] : "?";

                temp = "";
            }
            else if(bracketOpened == true){
                temp.push_back(s[i]);
            }
            else{
                result.push_back(s[i]);
            }
            i++;
        } 
        return result;
    }
};