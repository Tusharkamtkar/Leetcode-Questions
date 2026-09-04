class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        int n = gifts.size();

        while(k--){

           sort(gifts.begin(), gifts.end());

           int greatest = gifts[n-1];

           int gift = floor(sqrt(greatest));

           gifts[n-1] = gift;
        }
        
        long long sum = 0; 
        
        for(int gift : gifts){
            sum += gift;
        }
        return sum;
    }
};