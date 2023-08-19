class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // getting number of rows
        int n = matrix.size();
         // getting number of cols
        int m = matrix[0].size();
         // getting start and end to apply Binary Search
        int start = 0, end = (n*m)-1;
        while(start<= end) {
            int mid = start + (end - start)/2;
            // this is the formula to get rowIndex in 2D
            int rowIndex = mid/m;
            // this is the formula to get colIndex in 2D
            int colIndex = mid%m;
            // element found
            if(matrix[rowIndex][colIndex] == target) {
                return true;
            }else if(matrix[rowIndex][colIndex] > target) {
                end = mid - 1;
            }else {
                start = mid+1;
            }
        }
        // element not found
        return false;
    }
};