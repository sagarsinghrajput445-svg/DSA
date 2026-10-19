class Solution {
    static bool comp(vector<int>& a, vector<int>& b) {
        return a[0] < b[0]; // sort by start time
    }

public:
    int maxEvents(vector<vector<int>>& e) {
        sort(e.begin(), e.end(), comp);
        priority_queue<int, vector<int>, greater<int>> pq; // min-heap of end times
        int i = 0, n = e.size();
        int count = 0;
        int day = 0;

        while (i < n || !pq.empty()) {
            if (pq.empty()) {
                day = e[i][0]; // jump to next event start
            }
            // add all events starting today
            while (i < n && e[i][0] <= day) {
                pq.push(e[i][1]);
                i++;
            }
            // remove expired events
            while (!pq.empty() && pq.top() < day) {
                pq.pop();
            }
            if (!pq.empty()) {
                pq.pop(); // attend one event
                count++;
            }
            day++;
        }
        return count;
    }
};
