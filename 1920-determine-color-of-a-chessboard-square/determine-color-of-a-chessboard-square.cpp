class Solution {
public:
    bool squareIsWhite(string s) {
        if(s[0]=='a' || s[0]=='c' || s[0]=='e' || s[0]=='g'){
            if(s[1]%2==0) return true;
            else return false;
        }
        else{
            if(s[1]%2==0) return false;
            else return true;
        }
        return false;
    }
};