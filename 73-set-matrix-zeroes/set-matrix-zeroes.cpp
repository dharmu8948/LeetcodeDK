class Solution {
public:
    // Opimized soltion without extra space O(n*m)
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j] == 0) {
                    // mark i-th row
                    matrix[i][0] = 0;
                    // mark j-th col
                    if(j != 0)
                      matrix[0][j] = 0;
                    else
                      col0 = 0;
                }
            }
        }

        // set values except 0-th row and 0-th col else it will hamper other value
        for(int i=1;i<n;i++) {
            for(int j=1;j<m;j++) {
                if(matrix[0][j] == 0 || matrix[i][0] == 0) matrix[i][j] = 0;
            }
        }
        // set values at 0-th index for row and col
        if(matrix[0][0] == 0) {
            for(int j = 0;j<m;j++) matrix[0][j] = 0;
        }
         if(col0 == 0) {
            for(int i = 0;i<n;i++) matrix[i][0] = 0;
        }
    }
    // better solution with extra space (TIme Complexity: O(n*m + n*m) ~O(n*m), Space : max(O(m,n)))
/*    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n,0);
        vector<int> col(m,0);
        // making i-th row and j-th col as 1
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j] == 0) {
                    col[j] = 1;
                    row[i] = 1;
                }
            }
        }
        // finally making rows and cols as 0 based on row[i] and col[j]
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(row[i] == 1 || col[j] == 1) matrix[i][j] = 0;
            }
        }
    }
    */
/*
   // brute force approach
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j] == 0) {
                    markRow(i,m, matrix);
                    markCol(j,n, matrix);
                }
            }
        }

        // final iteration to make every -1 to 0
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j] == -5689767) matrix[i][j] = 0;
            }
        } 
    }
    // mark the i-th row and assuming -5689767 is not in matrix
    void markRow(int &i, int m, vector<vector<int>>& matrix) {
        for(int j = 0;j<m;j++) {
            if(matrix[i][j] !=0) matrix[i][j] = -5689767;
        }
    }
    // mark the j-th col and assuming -5689767 is not in matrix
    void markCol(int &j, int n, vector<vector<int>>& matrix) {
        for(int i = 0;i<n;i++) {
           if(matrix[i][j] !=0) matrix[i][j] = -5689767;
        }
    }
*/
};