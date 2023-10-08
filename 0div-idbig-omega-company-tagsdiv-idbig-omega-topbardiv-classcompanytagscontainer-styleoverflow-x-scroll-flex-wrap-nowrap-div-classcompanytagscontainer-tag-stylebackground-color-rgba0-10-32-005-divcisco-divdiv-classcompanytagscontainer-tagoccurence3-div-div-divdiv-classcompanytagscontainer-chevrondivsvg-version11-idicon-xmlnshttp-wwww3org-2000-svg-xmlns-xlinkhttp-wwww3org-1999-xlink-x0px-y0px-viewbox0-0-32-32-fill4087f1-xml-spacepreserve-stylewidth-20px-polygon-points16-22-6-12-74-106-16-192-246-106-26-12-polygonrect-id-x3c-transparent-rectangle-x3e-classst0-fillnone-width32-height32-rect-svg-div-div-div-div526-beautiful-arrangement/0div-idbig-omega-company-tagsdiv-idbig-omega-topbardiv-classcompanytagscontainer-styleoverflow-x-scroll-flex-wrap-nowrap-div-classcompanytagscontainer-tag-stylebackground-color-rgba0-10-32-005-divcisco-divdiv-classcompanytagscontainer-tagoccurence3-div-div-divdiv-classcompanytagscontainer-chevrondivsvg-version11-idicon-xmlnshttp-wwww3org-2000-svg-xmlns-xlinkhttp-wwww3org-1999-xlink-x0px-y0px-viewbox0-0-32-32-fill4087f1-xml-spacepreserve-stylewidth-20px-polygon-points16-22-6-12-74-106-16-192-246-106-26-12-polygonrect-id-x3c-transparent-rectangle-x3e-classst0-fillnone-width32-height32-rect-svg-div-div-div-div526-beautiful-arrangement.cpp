class Solution {
public:
     void countArrangementHelper(vector<int>&v, int&n, int&ans, int currNum) {
        // base case 
        if(currNum == n+1) {
            ans++;
            return ;
        }
        for(int i = 1;i<=n;i++) {
            if(v[i] ==0 && (currNum%i == 0 || i%currNum == 0)) {
                // on case solve
                v[i] = currNum;
                // baki recursion
                countArrangementHelper(v, n, ans, currNum+1);
                // backtracking
                v[i] = 0;
            }
        }
        
    }
    int countArrangement(int n) {
        // 1-index based that's why n+1 size
         vector<int> v(n+1);
        int ans = 0;
        countArrangementHelper(v, n, ans, 1);
        return ans;
    }
};