class Solution {
public:
    int minimumLength(string s) {
        deque<char> dq;

        for(char ch : s){
            dq.push_back(ch);
        }

        while(!dq.empty() && dq.size() != 1 && dq.front() == dq.back()){
            char front = dq.front();

            while(!dq.empty() && dq.back() == front){
                dq.pop_back();
            }
            while(!dq.empty() && dq.front() == front){
                dq.pop_front();
            }
        }
        return dq.size();
    }
};