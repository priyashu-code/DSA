class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int key) {
        int n = arr.size();
        int low = 0, high = n - 1;
        int first = -1, last = -1;

        // Find first occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key) {
                first = mid;
                high = mid - 1; // continue searching left
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        // Reset low and high for last occurrence
        low = 0, high = n - 1;

        // Find last occurrence
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == key) {
                last = mid;
                low = mid + 1; // continue searching right
            } else if (arr[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return {first, last};
    }
};
