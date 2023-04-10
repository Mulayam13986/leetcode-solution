class Solution {
public:
    bool isValid(string s) {
       stack <char> st;
        for (int i = 0 ; i < s.size() ; i++){
            if (st.empty()){
                st.push(s[i]);
            }
            else {
                if (s[i]==')'){
                    if (st.top() == '('){
                        st.pop();
                    }
                    else {
                        st.push(s[i]);
                    }
                }
                else if (s[i] == '}'){
                    if (st.top() == '{'){
                        st.pop();
                    }
                    else {
                        st.push(s[i]);
                    }
                    
                }
                else if (s[i] == ']'){
                    if (st.top() == '['){
                        st.pop();
                    }
                    else {
                        st.push(s[i]);
                    }
                }
                else {
                    st.push(s[i]);
                }
            }
        }
        if (st.empty()){
            return true;
        }
        return false;
    }
};