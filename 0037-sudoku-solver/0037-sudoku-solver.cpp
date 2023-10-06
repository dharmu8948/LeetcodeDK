class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row, int col, char value) {
        int n = board[0].size();
        for(int i = 0;i<n;i++) {
             // empty row check
            if(board[row][i] == value) {
                return false;
            }
            // empty column check
            if(board[i][col] == value) {
                return false;
            }
            // 3*3 matrix
            if(board[3*(row/3)+(i/3)][3*(col/3)+(i%3)] == value) {
                return false;
            }
        }
         return true;
    }
    bool solve(vector<vector<char>>& board, int n) {
        for(int i=0;i<n;i++) {
            for(int j = 0;j<n;j++) {
                if(board[i][j] =='.') {
                    for(char value = '1';value<='9';value++) {
                        // check if current position is safe or not
                        if(isSafe(board,i,j,value)) {
                           board[i][j] = value;
                           // recursive call
                           bool aageKaSolution = solve(board,n);
                           if(aageKaSolution) {
                               return true;
                           }
                           // backtrack
                           board[i][j] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        int n = board[0].size();
        bool ans = solve(board, n);
    }
};