class Solution {
public:
    vector<int> findArray(vector<int>& arr) {
        vector<int>ans(arr.size());
        ans[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            ans[i]=arr[i-1]^arr[i];
        }
        return ans;
    }
};