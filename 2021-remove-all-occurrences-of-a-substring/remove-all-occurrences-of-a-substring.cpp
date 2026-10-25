class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        int n = part.size();

        string ans = ""; // using string as stack;

        for(char &ch : s){
            ans.push_back(ch);

            if(ans.size() >= part.size() && ans.substr(ans.size() - n) == part){
                ans.erase(ans.size() - n);
            }
        }
        return ans;
    }
};