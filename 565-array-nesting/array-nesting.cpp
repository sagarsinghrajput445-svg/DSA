class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int maxCount=0;
        vector<int>visited(nums.size(),0);
        for (int x = 0; x < nums.size(); x++) {
            if(visited[x]==1) continue;
            int start = x;
            int i = start;
            int count = 1;
            while (nums[i] != start) {
                visited[nums[i]]=1;
                i = nums[i];
                count++;
            }
            if(count>maxCount){
                maxCount=count;
                count=0;
            }
        }
        return maxCount;
    }
};