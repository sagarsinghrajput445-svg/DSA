class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        int n = arr.size();
        vector<int> nge(n);
        stack<int> st;
        nge[n - 1] = arr[n-1];
        st.push(arr[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            while (st.size() > 0 && st.top() > arr[i]) {
                st.pop();
            }
            if (st.size() == 0) {
                nge[i] = arr[i];
            } else
                nge[i] =arr[i]- st.top();
            st.push(arr[i]);
        }
       return nge; 
    }
};