class Solution {
public:
    // better solution with extra space
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n,0);
        vector<int> col(m,0);
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(matrix[i][j] == 0) {
                    col[j] = 1;
                    row[i] = 1;
                }
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(row[i] == 1 || col[j] == 1) matrix[i][j] = 0;
            }
        }
    }
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