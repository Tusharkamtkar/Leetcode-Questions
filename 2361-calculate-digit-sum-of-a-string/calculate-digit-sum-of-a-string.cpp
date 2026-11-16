class Solution {
public:
    string digitSum(string s, int k) {

        while(s.size() > k){

            string temp;

            int n = s.size(); // coz s is 

            for(int i = 0; i < n; i += k){

                int curr = 0;

                for(int j = i; j < n && j < i+k; j++){

                    curr += s[j] - '0';
                }
                
                temp.append(to_string(curr));
            }
            s = temp; // updating ans always 
        }
        return s;
    }
};