class Solution {
public:

    int divisorSum(int num){

        int divisors = 0;
        int sum = 0;

        for(int fact = 1; fact <= sqrt(num); fact++){

            if(num % fact == 0){
                int otherFact = num / fact;

                if(otherFact == fact){ // sqaure
                    divisors += 1;
                    sum += fact;
                }
                else{
                    divisors += 2;
                    sum += fact;
                    sum += otherFact;
                }
            }
            // if(divisors > 4){
            //     return 0;
            // }
        }
        return divisors == 4 ? sum : 0;
    }
    int sumFourDivisors(vector<int>& nums) {
        
        int ans = 0;

        for(int &num : nums){
            ans += divisorSum(num);
        }
        return ans;
    }
};