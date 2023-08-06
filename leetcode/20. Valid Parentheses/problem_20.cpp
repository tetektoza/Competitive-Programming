class Solution {
public:
    bool isValid(string s) {

        std::stack<char> st;
        st.push(' ');

        char curr;
        for (int i = 0; i < s.size(); i++) {
            curr = s[i];
            if (curr == '}') {
                if (st.top() != '{') return false;
                st.pop();
            }
            else if (curr == ']') {
                if (st.top() != '[') return false;
                st.pop();
            }
            else if (curr == ')') {
                if (st.top() != '(') return false;
                st.pop();
            }
            else {
                st.push(curr);
            }
        }

        return st.top() == ' ' ? true : false;
    }
};
