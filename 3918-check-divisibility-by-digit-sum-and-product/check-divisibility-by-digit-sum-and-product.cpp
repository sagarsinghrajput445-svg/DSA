class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pro=1;
        int nums=n;
        while(n>0){
           int digit=n%10;
            sum+=digit;
            pro*=digit;
            n/=10;
        }
        int ans=sum+pro;
        cout<<sum<<" "<<pro;
        cout<<ans;
        if(nums%ans==0) return true;
        return false;
    }
};