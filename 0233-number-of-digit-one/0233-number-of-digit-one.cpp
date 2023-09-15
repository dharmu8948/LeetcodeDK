class Solution {
public:
    int countOne(int num) {
        int count = 0;
        while(num>0) {
            if(num%10 == 1)
              count++;
            num /= 10;
        }
        return count;
    }
    int countDigitOne(int n) {
        int countr = 0;
    for (long long i = 1; i <= n; i *= 10) {
         long long divider = i * 10;
         countr += (n / divider) * i + min(max(n % divider - i + 1, 0LL), i);
     }
    return countr;
    }
};