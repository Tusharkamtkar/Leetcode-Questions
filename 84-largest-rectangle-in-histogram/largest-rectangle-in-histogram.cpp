class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();

        stack<int> st;

        int largest = 0;

        int element = 0;
        int nse = 0;
        int pse = 0;

        for(int i = 0; i < n; i++){

            while(!st.empty() && heights[st.top()] > heights[i]){

                element = heights[st.top()];
                st.pop();

                nse = i;
                pse = st.empty() ? -1 : st.top();

                largest = max(largest, (element * (nse - pse - 1) ) );
            }
            st.push(i);
        }

        while(!st.empty()){

                element = heights[st.top()];
                st.pop();

                nse = n;
                pse = st.empty() ? -1 : st.top();

                largest = max(largest, (element * (nse - pse - 1) ) );
            }

        return largest;
    }
};