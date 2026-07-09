class Solution {
public:
    bool rotateString(string s, string goal) {

        if (s.length() != goal.length())
            return false;

        // s = s + s;

        // return (s.find(goal) != string :: npos) ;

        int n = s.length();
        if (s == goal)
            return true;
        for (int i = 0; i < n; i++) {
            s = s.substr(1,n-1) + s[0];
            // cout<<s<<endl;
            if (s == goal)
                return true;
        }
        return false;
    }
};