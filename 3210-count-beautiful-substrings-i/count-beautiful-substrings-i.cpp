class Solution {
public:
    bool isVowel(char ch){
        if(ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u'){
            return true;
        }
        return false;
    }
    int beautifulSubstrings(string s, int k) {
        int n = s.size();

        int result = 0;

        for(int i = 0; i < n; i++){
            int consonants = 0;
            int vowels = 0;

            for(int j = i; j < n; j++){
                if(isVowel(s[j])){
                    vowels++;
                }
                else{
                    consonants++;
                }
                if(vowels == consonants && (vowels * consonants) % k == 0){
                    result++;
                }
            }
        }
        return result;
    }
};