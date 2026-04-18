class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        for(auto num : s){
            if(num=='(' || num=='[' || num=='{'){
                st.push(num);
            }
       else{
            if( st.empty()||num==')' && st.top()!='(' ||num=='}' && st.top()!='{' ||num==']' && st.top()!='['){
                return false;
            }
            st.pop();
        }}
        return st.empty();
    }
};