class Solution {
public:
    bool checkString(string s) {
        
        // finds if there is any string ba is in s
        
        return s.find("ba") == string :: npos; 
    }
};