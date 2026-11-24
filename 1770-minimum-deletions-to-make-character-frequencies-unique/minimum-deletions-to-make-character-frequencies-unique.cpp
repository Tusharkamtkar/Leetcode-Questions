class Solution {
public:
    int minDeletions(string s) {

        vector<int> freq(26,0);

        for(char &ch : s){
            freq[ch - 'a']++; // for storing indexes
        }

        unordered_set<int> st; // for uniquness

        int del_count = 0;

        for(int i = 0; i < 26; i++){

            while(freq[i] > 0 && st.find(freq[i]) != st.end()){

                freq[i]--;
                del_count++;
            }
            st.insert(freq[i]);
        }

        return del_count;
    }
};