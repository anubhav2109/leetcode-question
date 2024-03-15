class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
     for(auto x:s){
         if(st.empty()){
             st.push(x);
         }
         else if((st.top()=='(' && x==')' )|| (st.top()=='[' && x==']' )||
                 (st.top()=='{' && x=='}' )){
             st.pop();
         }
         else{
             st.push(x);
         }
         
     }
        if(st.size()==0){
             return true;
         }
        return false;
    }
};