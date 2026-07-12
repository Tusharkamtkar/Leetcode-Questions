class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int index = 0;
        int n = chars.size();

        while(i < n){
            char currChar = chars[i];
            int count = 0;

            while(i < n && currChar == chars[i]){ // find counts of similar chars
                count++;
                i++;
            }

            // assingnment of values in chars
            chars[index] = currChar;
            index++;
            // for assigning count first we have to convert it into string for somr cases

            if(count > 1){
                string count_str = to_string(count);

                for(char &ch : count_str){
                    chars[index] = ch;
                    index++;
                }
            }
        }
        return index;
    }
};