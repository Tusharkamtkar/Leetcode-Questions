class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        int stream = 1; // if n =3 stream = {1,2,3}

        int i = 0;

        vector<string> result;

        while(i < target.size() && stream <= n){

            result.push_back("Push");

            if(stream == target[i]){
                i++;
            }
            else{
                result.push_back("Pop");
            }

            stream++;
        }
        return result;
    }
};