class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    int n=strs.size();
    sort(strs.begin(),strs.end());
    string left=strs[0];
    string right=strs[n-1];
    string s="";
    for(int i=0;i<min(left.length(),right.length());i++){
        if(left[i]==right[i]) s+=left[i];
        else{
            break;
        }
    }
    return s;
    }
};