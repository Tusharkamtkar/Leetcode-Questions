class Solution {
public:
    int bSearch(vector<int>& arr, int target) {

        int n = arr.size();

        int left = 0;
        int right = n - 1;

        int mid;

        while (left <= right) {
            mid = (left + right) / 2;

            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }
    bool checkIfExist(vector<int>& arr) {

        int n = arr.size();

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++) {

            int j = bSearch(arr, 2 * arr[i]);

            if (j != -1 && j != i) {
                return true;
            }
        }
        return false;
    }
};