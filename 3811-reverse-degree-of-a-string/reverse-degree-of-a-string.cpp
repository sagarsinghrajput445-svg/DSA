class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int pro=1;
        for(int i=0;i<s.length();i++){
            int rev='z'-s[i]+1;
            pro=(i+1)*rev;
            sum+=pro;
            pro=1;
        }
        return sum;
    }
};