class Solution {
public:
    bool isPalindrome(string s) {

        std::string out = "";
        for (int i = 0; i < s.size(); i++) {
            if (!std::isalnum(s[i])) continue;
            out += std::tolower(s[i]);
        }

        int y = out.size()-1;
        bool flag = true;
        for (int i = 0; i < out.size()/2; i++) {
            if (out[i] != out[y]) {
                flag = false;
                break;
            }

            y--;
        }

        return flag;
    }
};
