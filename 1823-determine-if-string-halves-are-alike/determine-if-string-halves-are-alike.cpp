class Solution {
public:
    // bool isVowel(char &ch){
    //     return(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    //            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    // }

    bool halvesAreAlike(string s) {
    //     int n = s.size();
        
    //     int i = 0; 
    //     int j = n/2; 

    //     int countLeft = 0;
    //     int countRight = 0;


    //     while(i < n/2 && j < n){
    //         if(isVowel(s[i])) countLeft++;

    //         if(isVowel(s[j])) countRight++;

    //         i++;
    //         j++;
    //     }
    //     return countLeft == countRight;

    int n = s.size();

    int i = 0, countL = 0;
    int j = n/2, countR = 0;

    unordered_set<char> st;

    st.insert('a');
    st.insert('e');
    st.insert('i');
    st.insert('o');
    st.insert('u');
    st.insert('A');
    st.insert('E');
    st.insert('I');
    st.insert('O');
    st.insert('U');

    while(i < n/2 && j < n){
        if(st.find(s[i]) != st.end()) countL++;

        if(st.find(s[j]) != st.end()) countR++;

        i++;
        j++;
    }
    return countL == countR;
    }
};