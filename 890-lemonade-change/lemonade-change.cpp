class Solution {
public:
    bool lemonadeChange(vector<int>& b) {
        int five=0;
        int ten=0;
        for(int i=0;i<b.size();i++){
            if(b[i]==5){
                five++;
            }
            else if(b[i]==10){
               if(five==0) return false;
               five--;
               ten++;
            }
            else{
                if(five>=1 && ten>=1){
                    ten--;
                    five--;
                }
                else if(five<3) return false;
                else five-=3;
            }
        }
        return true;
    }
};