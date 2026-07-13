class Solution {
public:
    // bool check(string word , char start, char end){
    //     for(auto &ch : word){
    //         if(ch < start || ch > end) return false;
    //     }
    //     return true;
    // }

    bool detectCapitalUse(string word) {
    //     if(check(word, 'A', 'Z') || check(word, 'a', 'z') || check(word.substr(1), 'a', 'z')){
    //         return true;
    //     }
    //     return false;

    int countCapitals = 0;

    for(char &ch : word){
        if(isupper(ch)){
            countCapitals++;
        }
    }
    if(countCapitals == 0 || countCapitals == word.size() || (countCapitals == 1 && isupper(word[0]))){
        return true;
    }
    return false;
    }
};