class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        queue<int>queuee;
        for(int i = 1; i <= 8; i++){
            queuee.push(i);
        }

        vector<int> result;

        while(!queuee.empty()){

            int temp = queuee.front();
            queuee.pop();

            if(temp >= low && temp <= high){
                result.push_back(temp);
            }

            int lastDigit = temp % 10;

            if(lastDigit + 1 <= 9){
                queuee.push(temp * 10 + (lastDigit + 1));
            }
        }
        return result;
    }
};