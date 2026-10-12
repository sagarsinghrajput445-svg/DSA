
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> v;
        for (int i = 0; i < arr.size(); i++) {
            if (v.empty() || v.back()[1] < arr[i][0]) {
                v.push_back(arr[i]);
            }
            else {
                v.back()[1] = max(v.back()[1], arr[i][1]);
            }
        }
        return v;
    }
};
