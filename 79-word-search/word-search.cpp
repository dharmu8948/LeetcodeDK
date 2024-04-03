class Solution {
public:
    bool helper(vector<vector<char>> &board,string word,int idx,int i,int j){
        if(idx==word.size()){
            return true;
        }
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j]!=word[idx]){
            return false;
        }
        board[i][j]='*';
        bool nextWord=helper(board,word,idx+1,i-1,j) || helper(board,word,idx+1,i+1,j) || helper(board,word,idx+1,i,j-1) || helper(board,word,idx+1,i,j+1);
        board[i][j]=word[idx];
        return nextWord;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(helper(board,word,0,i,j)){
                    return true;
                }
            }
        }
        return false;
    }
};