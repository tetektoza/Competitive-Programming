class Solution {
public:
    string convert(string s, int numRows) {
        

        if (numRows == 1) {
            return s;
        }

        std::vector<std::string>vec_str(numRows, "");

        uint8_t turn_around = -1;
        int curr = 0;
        for (int i = 0; i < s.size(); i++){
            if (curr == 0 || curr == numRows-1) {
                turn_around = -turn_around;
            }

            vec_str[curr] += s[i];

            if (turn_around == 1) {
                curr++;
            } else {
                curr--;
            }
        }

        std::string result_string = "";

        for (int i = 0; i < vec_str.size(); i++){
            for (int j = 0; j < vec_str[i].size(); j++){
                result_string += vec_str[i][j];
            }
        }
        
        return result_string;
    }
};
