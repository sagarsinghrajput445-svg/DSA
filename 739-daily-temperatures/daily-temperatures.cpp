class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> nge(n);
        stack<int> st;
        stack<int> pt;
        nge[n - 1] = 0;
        st.push(arr[n - 1]);
        pt.push(n-1);
        for (int i = n - 2; i >= 0; i--) {
            while (st.size() > 0 && st.top() <= arr[i]) {
                st.pop();
                pt.pop();
            }
            if (st.size() == 0)
                nge[i] = 0;
            else
                nge[i] = pt.top()-i;
            st.push(arr[i]);
            pt.push(i);
        }
        return nge;
    }
};