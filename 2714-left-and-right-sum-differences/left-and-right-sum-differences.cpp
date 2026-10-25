class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
    int m=nums.size();
     vector<int>leftSum(m);
     vector<int>rightSum(m);
     int sumL=0;
     for(int i=0;i<m;i++){
          leftSum[i]=sumL;
          sumL+=nums[i];
     }
     int sumR=0;
     for(int i=m-1;i>=0;i--){
          rightSum[i]=sumR;
          sumR+=nums[i];
     }
     vector<int>answer;
     for(int i=0;i<m;i++){
        int a=(leftSum[i]-rightSum[i]);
        if(a<0) answer.push_back(-a);
        else answer.push_back(a);
     }
   return answer;
    }
};