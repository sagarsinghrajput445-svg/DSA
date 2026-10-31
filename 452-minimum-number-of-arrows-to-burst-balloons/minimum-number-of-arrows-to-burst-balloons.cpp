class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end(),[](vector<int>& a, vector<int>& b) { return a[1] < b[1]; });
        vector<vector<int>> v;
        for (int i = 0; i < arr.size(); i++) {
            if (v.empty() || v.back()[1] < arr[i][0]) {
                v.push_back(arr[i]);
            }
        }
        return v.size();
    }
};