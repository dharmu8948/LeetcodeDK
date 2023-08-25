class Solution {
public:
    int arrangeCoins(int n) {
/*
// First Approach Using linear Search
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
        return count; */

        // Second Approach Using Binary Search
        long long int low= 1; long long int high= n;
        while (low<= high){
            long long int mid= low+ (high-low)/2;
            long long int mid_filled= (mid*(mid+1))/2;
            if (mid_filled==n)return mid;
            if (mid_filled > n){
                high= mid-1;
            }
            else{
                low= mid+1;
            }
        } 
        return low-1;
    }
};