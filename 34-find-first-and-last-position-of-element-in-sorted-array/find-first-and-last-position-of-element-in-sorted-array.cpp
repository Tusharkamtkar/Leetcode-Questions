class Solution {
public:
     
    // O(N)!
    // public:
    // vector<int> searchRange(vector<int>& nums, int target) {
    //   int sp = -1; 
    //   int ep = -1;
    //   int n = nums.size();

    //   for(int i = 0 ; i<n; i++){
    //     if(nums[i] == target){
    //         sp =i;
    //         break;
    //     }
    //   }
    //   for(int i = n-1; i>=0; i--){
    //     if(nums[i] == target){
    //         ep = i;
    //         break;
    //     }
    //   }
    //   return {sp, ep};
    // }

    // O(Log N) 
    // lower bound

// private: 
//     int lowerBound(vector<int> &nums, int low, int high, int target){
//         while(low  <= high){
//             int mid = (low + high) >> 1;

//             if(nums[mid] < target){
//                 low = mid + 1;
//             }
//             else{
//                 high = mid - 1;
//             }
//         }
//         return low;
//     }

// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int low = 0;
//         int high = nums.size() - 1;
//         int startingPoint = lowerBound(nums, low, high, target);
//         int endPoint = lowerBound(nums, low, high, target + 1) - 1;

//         if(startingPoint < nums.size() && nums[startingPoint] == target){
//             return {startingPoint, endPoint};
//         }
//         return {-1, -1};
    // }


    // Binary Search

    int firstPos(vector<int> &nums, int n, int target){
        
        int low = 0;
        int high = n-1;
        int first = -1;

        while(low <= high){
            int mid = (low + high) / 2;
            if(nums[mid] == target){
                first = mid;
                high = mid -1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return first;
    }
    int lastPos(vector<int> &nums, int n, int target){
        int low = 0; 
        int high = n-1;
        int last = -1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(nums[mid] == target){
                last = mid;
                low = mid  + 1;
            }
            else if(nums[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return last;
    }
    vector<int>searchRange(vector<int>& nums, int target){
        int n = nums.size();
        int first = firstPos(nums, n , target);
        if(first == -1) return {-1, -1};
        int last = lastPos(nums, n, target);
        return {first, last};
  }
};