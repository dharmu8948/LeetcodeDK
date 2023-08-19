class Solution {
public:
    int binarySearch(int n) {
        int start  = 0, end = n;
        long long int res = -1;
        while(start<=end) {
            long long int mid = start + (end - start)/2;
            long long int sRoot = mid*mid;
            if(n == sRoot)
            return mid;
            else if(sRoot<n) {
                res = mid;
                start = mid+1;
            }else {
               end = mid -1;
            }
            
        }
        return res;
    }
    int mySqrt(int x) {
        return binarySearch(x);
    }
};