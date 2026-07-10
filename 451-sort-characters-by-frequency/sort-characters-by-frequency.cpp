class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq;

        for(char ch : s){
            freq[ch]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto &it: freq){
            pq.push({it.second, it.first});
        }

        string result="";
        while(!pq.empty()){
            int f = pq.top().first;
            char c = pq.top().second;

            pq.pop();

            result += string(f,c);
        }
        return result;
    }
};