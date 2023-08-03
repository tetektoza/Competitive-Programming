class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_map<char, int> m;
        std::vector<std::unordered_map<char, int>> box(9);
        int box_ind = 0;
        for(int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
                if (board[j][i] == '.') continue;
                if (m.count(board[j][i])) { return false; }
                m[board[j][i]] = 1;
            }

            m.clear(); 

            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] == '.') continue;
                box_ind = (i/3) * 3 + j / 3;
                if (m.count(board[i][j]) || box[box_ind].count(board[i][j])) { return false; }
                m[board[i][j]] = 1;
                box[box_ind][board[i][j]] = 1;
            }

            m.clear();

        }
        return true;   
    }
};
