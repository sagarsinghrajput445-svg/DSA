class Solution {
public:
    string reverseWords(string s) {
    vector<string>v;
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        v.push_back(temp);
    }
    reverse(v.begin(),v.end());
    string str="";
    for(int i=0;i<v.size();i++){
        str+=v[i];
        if(i!=v.size()-1) str+=" ";
    }
    return str;
    }
};