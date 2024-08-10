class Solution {
public:
   // optimal Solution in O(n^2) time Complexity ans constant space
   vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1;col<row;col++) {
            ans = ans*(row - col);
            ans = ans / col;
            ansRow.push_back(ans);
        }
        return ansRow;
   }
   vector<vector<int>> generate(int n) {
      vector<vector<int>> ans;
      for(int i = 1;i <= n; i++) {
        ans.push_back(generateRow(i));
      }
      return ans;
   }

   // brute force approach which have Time Complexity ~O(n*n*n)
   /*
   int nCr(int n, int row) {
        vector<int> temp;
        int ans = 1;
        for(int i=0;i<row;i++) {
            ans = ans * (n-i);
            ans = ans/(i+1);
           // temp.push_back(ans);
        }
        return ans;
   }
    vector<vector<int>> generate(int n) {
       vector<vector<int>> ans;
       for(int i=1;i<=n;i++) {
        vector<int> arr;
        for(int j = 1;j<=i;j++) {
        
            arr.push_back(nCr(i-1,j-1)); 
        }
        ans.push_back(arr);
       }
       return ans;
    }
    */
};