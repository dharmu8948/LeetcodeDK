class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
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
    }
};