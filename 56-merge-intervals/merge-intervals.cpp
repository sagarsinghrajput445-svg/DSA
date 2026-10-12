class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> v;
        for (int i = 0; i < arr.size(); i++) {
            vector<int> start = arr[i];
            int j;
            for (j = i + 1; j < arr.size(); j++) {
                vector<int> end = arr[j];
                if (start[1] >= end[0])
                    start[1] = max(start[1], end[1]);
                else {
                    break;
                }
            }
            v.push_back(start);
            i = j-1;
        }
        return v;
    }
};