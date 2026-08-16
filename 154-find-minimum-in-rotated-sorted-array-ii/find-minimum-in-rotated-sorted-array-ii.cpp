class Solution {
public:
    int find(vector<int>& nums, int lo, int hi) {
        while (lo < hi) {
            while (lo < hi && nums[lo] == nums[lo + 1])
                lo++;
            while (lo < hi && nums[hi] == nums[hi - 1])
                hi--;
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] > nums[hi])
                lo = mid + 1;
            else if (nums[mid] < nums[hi])
                hi = mid;
            else
                hi--;
        }
        return lo;
    }
    void binarySearch(vector<int>& nums, int lo, int hi, int& min){
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(nums[mid]<min){
                min=nums[mid];
            }
            else hi=mid-1;
        }
    }
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int pivot=find(nums,0,n-1);
        int min=INT_MAX;
        binarySearch(nums,0,pivot-1,min);
        binarySearch(nums,pivot,n-1,min);
        return min;
    }
};