class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        vector<int> st; // using vector as STACK

        for(int &astro : asteroids){

            while(!st.empty() && st.back() > 0 && astro < 0){

                int sum = st.back() + astro;

                if(sum < 0){
                    st.pop_back();
                }
                else if(sum > 0){
                    astro = 0;
                }
                else{
                    st.pop_back();
                    astro = 0;
                }
            } 
            if(astro != 0){
                st.push_back(astro);
            }
        }
        return st; 
    }
};