class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
    sort(p.begin(),p.end());
    sort(t.begin(),t.end());
    int count=0;
    int i=0;
    int j=0;
    while(i<p.size() && j<t.size()){
        if(t[j]>=p[i]){
            count++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return count;
    }
};