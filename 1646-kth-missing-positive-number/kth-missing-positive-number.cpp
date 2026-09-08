class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int lo=0;
        int hi=n-1;
        int ans=arr.size();
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]-mid-1>=k){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans+k;
    }
};