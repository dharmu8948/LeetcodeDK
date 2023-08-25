class Solution {
public:
    int arrangeCoins(int n) {

        int count = 0;
        long long int sum = 0;
        long long int temp = n;
        for(int i=1;i<=n;i++) {
            sum += i;
            if(temp>=sum) {
                count++;
            }else {
                break;
            }
        }
        return count;
    }
};