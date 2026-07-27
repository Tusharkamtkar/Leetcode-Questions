class Solution {
public:
    char findTheDifference(string s, string t) {
        int sumS = 0;
        for(char &ch : s){
            sumS += ch;
        }

        int sumT = 0;
        for(char &ch : t){
            sumT += ch;
        }

        return (char)(sumT - sumS); // sumT is always greater than sumS
    }
};