class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end(),[](vector<int>& a, vector<int>& b) { return a[1] < b[1]; });
        int ans = 1;
        int arrow = arr[0][1];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i][0] > arrow) {
                ans++;
                arrow = arr[i][1];
            }
        }
        return ans;
    }
};