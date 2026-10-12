class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr,vector<int>& newInterval) {
        vector<vector<int>> ans = arr;
        ans.push_back(newInterval);
        sort(ans.begin(), ans.end());
        vector<vector<int>> v;
        for (int i = 0; i < ans.size(); i++) {
            vector<int> start = ans[i];
            int j;
            for (j = i + 1; j < ans.size(); j++) {
                vector<int> end = ans[j];
                if (start[1] >= end[0])
                    start[1] = max(start[1], end[1]);
                else {
                    break;
                }
            }
            v.push_back(start);
            i = j - 1;
        }
        return v;
    }
};