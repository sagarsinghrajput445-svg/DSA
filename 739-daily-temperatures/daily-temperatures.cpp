class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n = arr.size();
        vector<int> nge(n);
        stack<pair<int,int>> st;
        nge[n - 1] = 0;
        st.push({arr[n - 1],n-1});
        for (int i = n - 2; i >= 0; i--) {
            while (st.size() > 0 && st.top().first <= arr[i]) {
                st.pop();
            }
            if (st.size() == 0)
                nge[i] = 0;
            else
                nge[i] = st.top().second-i;
            st.push({arr[i],i});
        }
        return nge;
    }
};