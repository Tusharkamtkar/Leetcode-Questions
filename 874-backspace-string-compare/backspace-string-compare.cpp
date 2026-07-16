class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = "";
        string s2 = "";

        for(char &ch : s){
            if(ch == '#'){
                if(!s1.empty()){
                    s1.pop_back();
                }
            }
            else{
                s1.push_back(ch);
            }
        }
        for(char &ch : t){
            if(ch == '#'){
                if(!s2.empty()){
                    s2.pop_back();
                }
            }
            else{
                s2.push_back(ch);
            }
        }
        return s1 == s2;
    }
};