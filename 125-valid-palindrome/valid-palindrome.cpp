class Solution {
public:
    bool isPalindrome(string s) {
    vector<string>v;
    string temp;
    stringstream ss(s);
    while(ss>>temp){
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
    string x=v[i];
    for(int j=0;j<x.length();j++){
        if((int)x[j]>=65 && (int)x[j]<=90) x[j]=(char)(x[j]+32);
    }
    v[i]=x;
    }
    string str="";
    for(int i=0;i<v.size();i++){
    string p=v[i];
    for(int j=0;j<p.length();j++){
        if(((int)p[j]>=97 && (int)p[j]<=122) || ((int)p[j]>=48 && (int)p[j]<=57)) str+=p[j];
        else continue;
        }
    }
        string ptr=str;
        bool flag=true;
        reverse(ptr.begin(),ptr.end());
        for(int i=0;i<str.length();i++){
            if(str[i]!=ptr[i]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};