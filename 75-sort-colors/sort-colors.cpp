class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i<n; i++){
            if(nums[i] == 0) count0++;
            else if(nums[i] == 1) count1++;
            else count2++;
        }
        int i = 0,j=0;
        while(j< count0 && i<n){
            nums[i] = 0;
            i++;
            j++;
        }
        j=0;
        while(j< count1 && i<n){
            nums[i] = 1;
            i++;
            j++;
        }

        while(i < n){
            nums[i] = 2;
            i++;
        }
    }
};