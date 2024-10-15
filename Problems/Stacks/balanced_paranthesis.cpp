// By: Prakhar Prasun, from: https://leetcode.com/problems/valid-parentheses/
// Best time complexity

class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        unordered_map <char,char> m = {{'(',')'},{'[',']'},{'{','}'}};
        for(auto c : s){
            if(c=='(' || c=='[' || c=='{'){
                st.push(c);
            } else {
                if(st.empty()){
                    return false;
                }
                if(c!=m[st.top()]) {
                    return false;
                }
                else {
                    st.pop();
                }
            }
        }
        if(!st.empty()) {
            return false;
        }

        return true;
    }
};