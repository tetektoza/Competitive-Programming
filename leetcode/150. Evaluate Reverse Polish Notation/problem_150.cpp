class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        int32_t right, left;

        std::stack<int> st;
        for (auto i : tokens) {
            if (i == "+") {
                right = st.top(); st.pop();
                left = st.top(); st.pop();
                st.push(left+right);
            }
            else if (i == "*") {
                right = st.top(); st.pop();
                left = st.top(); st.pop();
                st.push(left*right);
            }
            else if (i == "-") {
                right = st.top(); st.pop(); 
                left = st.top(); st.pop();
                st.push(left-right);
            }
            else if (i == "/") {
                right = st.top(); st.pop();
                left = st.top(); st.pop();
                st.push(left/right);
            }
            else {
                st.push(stoi(i));
            }
        }

        return st.top();
    }
};
