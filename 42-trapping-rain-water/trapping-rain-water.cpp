class Solution {
public:
    int raintrap(vector<int>& v) {
        int n = v.size();
        // prev greatest element array
        int prev[n];
        prev[0] = -1;
        int max = v[0];
        for (int i = 1; i < n; i++) {
            prev[i] = max;
            if (max < v[i])
                max = v[i];
        }
        // next greatest element array
        int next[n];
        next[n - 1] = -1;
        max = v[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            next[i] = max;
            if (max < v[i])
                max = v[i];
        }
        // minimum array -> prev as minimum
        for (int i = 0; i < n; i++) {
            prev[i] = min(prev[i], next[i]);
        }
        // calculating water
        int water = 0;
        for (int i = 1; i < n; i++) {
            if (v[i] < prev[i]) {
                water += (prev[i] - v[i]);
            }
        }
        return water;
    }
    int trap(vector<int>& v) {
        int water;
        return raintrap(v);
    }
};