class Solution {
public:
    bool divideArray(vector<int>& nums) {
        
        unordered_set<int> st;

        for(auto &no : nums){

            if(st.count(no)){
                st.erase(no);
            }
            else{
                st.insert(no);
            }
        }
        
        return st.empty();
    }
};