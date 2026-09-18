class Solution {
public:
    void merge(vector<int>& a, vector<int>& b, vector<int>& res, int& count) {
        int i = 0;
        int j = 0;
        while (i < a.size() && j < b.size()) {
            if ((long long)a[i] > (long long)2 * b[j]) {
                count += (a.size() - i);
                j++;
            } else
                i++;
        }
        i = 0;     // a
        j = 0;     // b
        int k = 0; // res
        while (i < a.size() && j < b.size()) {
            if (a[i] <= b[j]) {
                res[k] = a[i];
                i++;
                k++;
            }
            else {
                res[k] = b[j];
                j++;
                k++;
            }
        }
        // for remaining//
        if (i == a.size()) { // a ke saare element utha chuka hoon
            while (j < b.size()) {
                res[k] = b[j];
                // k++;
                j++;
                k++;
            }
        }
        if (j == b.size()) { // v2 ke saare element utha chuka hu
            while (i < a.size()) {
                res[k] = a[i];
                // k++;
                i++;
                k++;
            }
        }
    }
    void mergeSort(vector<int>& v, int& count) {
        int n = v.size();
        if (n == 1)
            return;
        int n1 = n / 2, n2 = n - n / 2;
        vector<int> a(n1), b(n2);
        // copy pasting
        for (int i = 0; i < n1; i++) {
            a[i] = v[i];
        }
        for (int i = 0; i < n2; i++) {
            b[i] = v[i + n1];
        }
        // magic aka recrsion
        mergeSort(a, count);
        mergeSort(b, count);
        // merge
        merge(a, b, v, count);
        a.clear();
        b.clear();
    }
    int reversePairs(vector<int>& nums) {
        int count = 0;
        mergeSort(nums, count);
        return count;
    }
};