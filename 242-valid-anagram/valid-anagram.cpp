class Solution {
public:
    bool isAnagram(string s, string t) {
        // int n = s.length();
        // int m = t.length();

        // if(n != m) return false;

        // int count[26] = {0};

        // for(int i = 0; i < n; i++){
        //     int index = s[i] - 'a';
        //     count[index]++;
        // }
        // for(int i = 0; i < m; i++){
        //     int index = t[i] - 'a';

        //     if(count[index] == 0) return false;

        //     else count[index]--;
        // }
        // return true;


        // method 1
    //     sort(s.begin(), s.end());
    //     sort(t.begin(), t.end());

    //    return s == t;

    vector<int> count(26, 0);

    for(char ch : s){
        count[ch - 'a']++;
    }
    for(char ch : t){
        count[ch - 'a']--;
    }

    for(int i = 0; i < 26; i++){
        if(count[i] != 0) return false;
    }
    return true;
    }
};