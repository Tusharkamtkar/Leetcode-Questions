class Solution {
public:

    bool checkAnagram(string str1, string str2){

        int arr1[26] = {0};
        int arr2[26] = {0};

        for(char &ch : str1){
            arr1[ch - 'a']++;
        }
        for(char &ch : str2){
            arr2[ch - 'a']++;
        }

        for(int i = 0; i < 26; i++){
            if(arr1[i] != arr2[i]){
                return false;
            }
        }
        return true;


    }
    vector<string> removeAnagrams(vector<string>& words) {
        
        int n = words.size();

        vector<string> ans;

        ans.push_back(words[0]);

        for(int i = 1; i < n; i++){

            if(!checkAnagram(words[i], ans.back())){ // both words[i], words[i-1]

                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};