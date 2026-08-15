class Solution {
public:
    int elevatorRequests(int n, vector<int>& r) {
        int count=0;
        for(int i=1;i<r.size();i++){
            count+=abs(r[i]-r[i-1]);
        }
        return r[0]+count;
    }
};