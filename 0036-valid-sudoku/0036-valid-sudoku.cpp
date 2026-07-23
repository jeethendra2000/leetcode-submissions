class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {

                if (board[r][c] == '.')
                    continue;

                char num = board[r][c];

                string row = string(1, num) + "r" + to_string(r);
                string col = string(1, num) + "c" + to_string(c);
                string box = string(1, num) + "b" + to_string(r / 3) + to_string(c / 3);

                if (!seen.insert(row).second ||
                    !seen.insert(col).second ||
                    !seen.insert(box).second)
                    return false;
            }
        }

        return true;
    }
};