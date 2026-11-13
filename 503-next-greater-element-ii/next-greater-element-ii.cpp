class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size(); // actual size of nums

        int circularSize = 2*n-1; // size of circular nums 

        stack<int> st;

        vector<int> nge(n, -1);

        for(int i = circularSize; i >= 0; i--){

            while(!st.empty() && st.top() <= nums[i%n]){ // for accessing el cicularlly
                st.pop();
            }

            if(i < n){ // traversall reaches actual size of nums

                if(st.empty()){
                    nge[i] = -1;
                }
                else{
                    nge[i] = st.top();
                }
            }
            st.push(nums[i%n]);
        }
        return nge;
    }
};