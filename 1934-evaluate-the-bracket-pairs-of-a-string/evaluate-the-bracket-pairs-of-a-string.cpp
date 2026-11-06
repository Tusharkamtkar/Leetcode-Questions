class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        int n = s.size();

        string result = "";

        unordered_map<string, string> mpp;

        for(auto &it : knowledge){
            mpp[it[0]] = it[1];
        }

        int i = 0;

        while(i < n){
            if(s[i] == '('){
                int j = s.find(")", i+1); // directly find the () cmplt string indexes

                string temp = s.substr(i+1, j-i-1);

                result += mpp.count(temp) ? mpp[temp] : "?";

                i = j;
            }
            else{
                result.push_back(s[i]);
            }
            i++;
        }
        return result;
    }
};