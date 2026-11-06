class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        int n = s.size();

        int i = 0;

        string result = "";
        string temp = "";

        unordered_map<string, string> mpp;

        for(auto &it: knowledge){
            mpp[it[0]] = it[1];
        }

        bool opened = false;

        while(i < n){
            if(s[i] == '('){
                opened = true;
            } 
            else if(s[i] == ')'){
                opened = false;

                result += mpp.count(temp) ? mpp[temp] : "?";

                temp = "";
            }  
            else if(opened == true){
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