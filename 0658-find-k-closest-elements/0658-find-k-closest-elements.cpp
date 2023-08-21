class Solution {
public:
    vector<int> twoPtrMethod(vector<int>& arr, int k, int x) {
        // Using Binary Search
        int low = 0, high = arr.size()-1;
        while(high - low >= k) {
            if(x-arr[low] > arr[high]-x) {
                low++;
            }else {
                high--;
            }
        }
        // now we have low and high point on correct position
        // vector<int> res;
        // for(int i = low;i<=high;i++) {
        //     res.push_back(arr[i]);
        // }
        return vector<int>(arr.begin()+low, arr.begin()+high+1);
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
       return twoPtrMethod(arr, k,x);
    }
};