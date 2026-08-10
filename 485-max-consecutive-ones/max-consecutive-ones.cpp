class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int maxAns=0;
        for(int i=0;i<arr.size();i++){
            int count=0;
            while(i<arr.size() && arr[i]==1){
                count++;
                i++;
            }
            maxAns=max(maxAns,count);
            count=0;
        }
        return maxAns;
    }
};