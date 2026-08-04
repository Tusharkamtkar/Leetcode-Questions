class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        int largest = INT_MIN;
        int secLargest = INT_MIN;

        int smallest = INT_MAX;
        int secSmallest = INT_MAX;

        for(int num : nums){

            if(num > largest){
                secLargest = largest;
                largest = num;
            }
            else{
                secLargest = max(secLargest, num);
            }
            if(num < smallest){
                secSmallest = smallest;
                smallest = num;
            }
            else{
                secSmallest = min(secSmallest, num);
            }
        }
        return (largest * secLargest) - (smallest * secSmallest);
    }
};