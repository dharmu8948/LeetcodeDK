class Solution {
public:
    unordered_map<int, bool> rowCheck;
    unordered_map<int, bool> upperLeftDiagonalCheck;
    unordered_map<int, bool> bottomLeftDiagonalCheck;
    void storeSolution(vector<vector<char>> &board, int n, vector<vector<string>> &ans) {
        vector<string> temp;
        for(int i=0;i<n;i++) {
            string output = "";
            for(int j=0;j<n;j++) {
                output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }
        ans.push_back(temp);
    }
    bool isSafe(int row, int col, vector<vector<char>> &board, int n) {
        // row check
        if(rowCheck[row] == true) {
            return false;
        }
        // upper left Diagonal check
        if(upperLeftDiagonalCheck[row+col] == true) {
            return false;
        }

         if(bottomLeftDiagonalCheck[n-1+col-row] == true) {
            return false;
        }
        // agar uppar kahi condition satify nahi hua iska matlb ye safe position hai, tru return kar do
        return true;

    }
    void solve(vector<vector<char>> &board, int col, int n, vector<vector<string>> &ans) {
        // base case
        if(col>=n) {
            storeSolution(board, n, ans);
            return ;
        }
        // ek case solve kardo baki  recursion sambhal lega
        for(int row = 0;row<n;row++) {
            if(isSafe(row, col, board, n)) {
                // safe hai to Queen rakh skte hai
                board[row][col] = 'Q';
                rowCheck[row] = true;
                upperLeftDiagonalCheck[row+col] = true;
                bottomLeftDiagonalCheck[n-1+col-row] = true;

                // baki recursion sambhal lega
                solve(board, col+1, n, ans);

                // ab backtrack kar jaao
                board[row][col] = '.';
                rowCheck[row] = false;
                upperLeftDiagonalCheck[row+col] = false;
                bottomLeftDiagonalCheck[n-1+col-row] = false;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        int col = 0;
        vector<vector<char>> board(n, vector<char>(n,'.'));
        vector<vector<string>> ans;
        solve(board, col, n, ans);
        return ans;
    }
};