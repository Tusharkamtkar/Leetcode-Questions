class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        int n = nums.size();

        int circularSize = 2*n-1; // double copy of arr circular array size

        stack<int> st;

        vector<int> nge(n, -1);

        for(int i = circularSize; i >= 0; i--){

            while(!st.empty() && st.top() <= nums[i%n]){ // for accessing el. circularlly
                st.pop();
            }

            if(i < n){ // actuall size of arr

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