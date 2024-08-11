class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Optimal Solution without extra space (in-place solution) T.C. O(n^2) S.C. - O(1)
        int n = matrix.size();
        // Step 1: Transpose the Matrix
        for( int i = 0 ; i < n ; i++ ) {
           for( int j = i ; j < n ; j++ ) {
              swap(matrix[i][j], matrix[j][i]);
           }
        }
        // Step 2: Reverse the column first to last second to second last and so on..
         for( int i = 0 ; i < n ; i++ ) {
          // reverse col
          reverse(matrix[i].begin(), matrix[i].end());
        }

        /*
        // Brute force approach ( T.C. - O(n^2), S. C. - O(n^2))
         int n = matrix.size();
        vector<vector<int>> temp(n, std::vector<int>(n, 0));
        for( int i = 0 ; i < n ; i++ ) {
            for( int j = 0 ; j < n ; j++ ) {
                temp[j][n-i-1] = matrix[i][j];
            }
        }

        for( int i = 0 ; i < n ; i++ ) {
            for( int j = 0 ; j < n ; j++ ) {
                matrix[i][j] = temp[i][j];
            }
        }
        */
    }
};