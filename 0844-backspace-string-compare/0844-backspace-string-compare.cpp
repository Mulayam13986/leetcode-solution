class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<int> st;
        
        for (int i = 0 ; i < s.size() ; i++){
            
            if (s[i] != '#'){
                st.push(s[i]);
            }
            else{
                if (!st.empty()){
                   st.pop(); 
                }
            }
        }
        stack<int> st2;
        
        for (int i = 0 ; i < t.size() ; i++){
            
            if (t[i] != '#'){
                st2.push(t[i]);
            }
            else{
                if (!st2.empty()){
                   st2.pop(); 
                }
            }
        }
        
        while (!st.empty() || !st2.empty()){
            if (st.empty() || st2.empty() ){
                return false;
            }
            if (st.top()!=st2.top()){
                return false;
            }
            st.pop();
            st2.pop();
        }
        return true;
        
    }
};