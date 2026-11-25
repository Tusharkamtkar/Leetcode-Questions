class Solution {
public:

    int largestHistogram(vector<int> &preSum){

        int n = preSum.size();

        stack<int> st;

        int element = 0;
        int nse = 0;
        int pse = 0;

        int largest = 0;

        for(int i = 0; i < n; i++){

            while(!st.empty() && preSum[st.top()] > preSum[i]){

                element = preSum[st.top()];
                st.pop();

                nse = i;
                pse = st.empty() ? -1 : st.top();

                largest = max(largest, (element * (nse - pse - 1)));
            }

            st.push(i);
        }

        while(!st.empty()){

            element = preSum[st.top()];
            st.pop();

            nse = n; 
            pse = st.empty() ? -1 : st.top();

            largest = max(largest, (element * (nse - pse - 1)));
        }
        return largest;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        
        int n = matrix.size(); // rows
        int m = matrix[0].size(); // cols

        vector<vector<int>> preSum(n, vector<int>(m, 0));

        for(int j = 0; j < m; j++){

            int sum = 0;

            for(int i = 0; i < n; i++){

                if(matrix[i][j] == '1'){
                    sum++;
                }
                else{
                    sum = 0;
                }

                preSum[i][j] = sum;
            }
        }

        int maxArea = 0;

        for(int i = 0; i < n; i++){

            maxArea = max(maxArea, largestHistogram(preSum[i]));
        }

        return maxArea;
    }
};