class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        while(low <= high){
            int mid = (low + high) >>1;
            if(nums[mid] == target) return mid;

            //if left half is sorted!
           if(nums[low] <= nums[mid]){
            // checks if target is lies on left half or not
            if(target >= nums[low] && target <= nums[mid]){
            high = mid-1;
           }
           else{
            low = mid+1;
           }
        }
        
        //if right half is sorted!
        else{
            // checks if target is lies on right half or not
            if(target >= nums[mid] && target <= nums[high]){
            low = mid+1;
         }
        
        else{
            high = mid-1;
        }
      }
    }
     return -1;
  }
};