class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == 0) {
            return 0;
        }
        if(dividend == INT_MIN && divisor == -1) {
            return 2147483647;
        }
        if(dividend == INT_MIN && divisor == 1) {
            return INT_MIN;
        }
        long long int start = 0; 
        long long int ans = 0;
        long int end = abs(dividend);
        while(start<=end) {
            long long int mid = (start + (end - start)/2);
            if(abs(mid*divisor) == abs(dividend)) {
                ans = mid;
                break;
            }
            if(abs(mid*divisor) > abs(dividend)) {
                end = mid - 1;
            }else {
                ans = mid;
                start = mid + 1;
            }
        }
        if((dividend<0 && divisor<0)||(dividend>0 && divisor>0))
            return ans;
        else
            return -ans;
    }
};