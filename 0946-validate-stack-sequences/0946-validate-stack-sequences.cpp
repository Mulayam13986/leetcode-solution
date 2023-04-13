class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int ptr1 = 0;
        int ptr2 = 0;
        stack<int> st;
        while(ptr1<pushed.size() && ptr2<popped.size()){
            st.push(pushed[ptr1]);
            ptr1++;
            while(!st.empty() && ptr2<popped.size() && st.top()==popped[ptr2]){
                ptr2++;
                st.pop();
            }
        }
        // while(!st.empty() && st.top() == popped[ptr2]){
        //     st.pop();
        //     ptr2++;
        // }
        if(ptr2==popped.size()) return true;
        return false;

    }
};