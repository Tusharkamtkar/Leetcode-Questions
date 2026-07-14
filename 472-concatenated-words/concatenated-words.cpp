class Solution {
public:
    unordered_map<string,bool> memo;

    bool isConcatenated(string word, unordered_set<string> &st){
        if(memo.count(word)) return memo[word];
        for(int i = 1; i < word.size(); i++){
            string prefix = word.substr(0, i);
            string suffix = word.substr(i);

            if((st.find(prefix) != st.end() && st.find(suffix) != st.end()) ||
               (st.find(prefix) != st.end() && isConcatenated(suffix, st))){

                memo[word] = true;
                
                return true;
               }
              
        }
        return memo[word]=false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        int n = words.size();
        unordered_set<string>st(words.begin(),words.end());

        vector<string> result;

        for(int i = 0; i<n; i++){
            string word = words[i];
            if(isConcatenated(word, st)){
                result.push_back(word);
            }
        }
        return result;
    }
};