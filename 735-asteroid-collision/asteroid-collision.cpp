class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {
       vector<int>v;
       stack<int>st;
       for(int i=0;i<arr.size();i++){
            if(st.size()==0) st.push(arr[i]);
            else if(st.top()>0 && arr[i]>0) st.push(arr[i]);
            else if(st.top()<0) st.push(arr[i]);
            else if(st.top()>0 && arr[i]<0){
                while(st.size()!=0 && (st.top()<abs(arr[i]) && st.top()>0)) st.pop();
                if(st.size()!=0 && st.top()>abs(arr[i])) continue;
                else if(st.size()!=0 && st.top()==abs(arr[i])) st.pop();
                else st.push(arr[i]);
            }
       }
       while(st.size()>0){
            v.push_back(st.top());
            st.pop();
       }
       reverse(v.begin(),v.end());
       return v;
    }
};