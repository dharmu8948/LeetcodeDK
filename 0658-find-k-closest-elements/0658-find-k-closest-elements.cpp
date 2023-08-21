class Solution {
public:
   int lowerBound(vector<int>& arr, int x) {
       int start = 0, end = arr.size();
       while(start<=end) {
           int mid = start + (end - start)/2;
           if(arr[mid] == x)
           return mid;
           else if(arr[mid]>x) {
               end = mid - 1;
           }else {
               start = mid + 1;
           }
       }
       return -1;
   }
    vector<int> bs_Method(vector<int>& arr, int k, int x) {
        int high = lowerBound(arr,x);
        int low = high-1;
        while(k--) {
            if(x-arr[low] > arr[high]-x) {
                high++;
            }else {
                low--;
            }
        }
         return vector<int>(arr.begin()+low, arr.begin()+high+1);
    }
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