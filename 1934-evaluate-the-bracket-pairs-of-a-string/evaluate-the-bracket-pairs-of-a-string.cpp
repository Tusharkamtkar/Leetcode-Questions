class Solution {
public:

    bool isAlpha(char ch){
        if(ch >= 'a' && ch <= 'z'){
            return true;
        }
        return false;
    }

    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        int n = s.size();

        int i = 0;

        unordered_map<string, string> mpp;

        for(auto &it : knowledge){
            mpp[it[0]] = it[1];
        }

        string result = "";

        while(i < n){
            if(isAlpha(s[i])){
                result.push_back(s[i]);
            }
            else{
                i++;
                string temp = "";

                while(i < n && s[i] != ')'){
                    temp.push_back(s[i]);
                    i++;
                }
                result += mpp.count(temp) ? mpp[temp] : "?";
            }
            i++;
        }
        return result;
    }
};