class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& newInterval) {
        vector<vector<int>> ans = arr;
        ans.push_back(newInterval);
        vector<vector<int>> v;
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            if (v.empty() || v.back()[1] < ans[i][0]) {
                v.push_back(ans[i]);
            } else {
                v.back()[1] = max(v.back()[1], ans[i][1]);
            }
        }
        return v;
    }
};