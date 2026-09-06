class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if (n == 1)
            return arr[0];
        int lo = 0, hi = n - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (mid == 0 && arr[mid] != arr[mid + 1])
                return arr[mid];
            if (mid == n - 1 && arr[mid] != arr[mid - 1])
                return arr[mid];
            if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
                return arr[mid];
            if (mid % 2 == 0) {
                if (arr[mid - 1] == arr[mid]) {
                    hi = mid - 1;
                } else
                    lo = mid + 1;
            } else {
                if (arr[mid - 1] == arr[mid]) {
                    lo = mid + 1;
                } else
                    hi = mid - 1;
            }
        }
        return -1;
    }
};