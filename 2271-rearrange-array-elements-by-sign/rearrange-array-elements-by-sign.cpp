class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n  = nums.size();

        vector<int> pos,neg;

        for(int i= 0; i<n; i++){
            if(nums[i] > 0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }

       for(int i=n-1;i>=0;i--){
        if(i%2==0){
            nums[i]=pos.back();
            pos.pop_back();
        }
        else{
            nums[i]=neg.back();
            neg.pop_back();
        }
       }
    return nums;}
};