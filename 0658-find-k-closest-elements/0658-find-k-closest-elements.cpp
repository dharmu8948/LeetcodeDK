class Solution {
public:
   int lowerBound(vector<int>& arr, int x) {
       int start = 0, end = arr.size()-1;
       int ans = end;
       while(start<=end) {
           int mid = start + (end - start)/2;
           if(arr[mid] >= x) {
               ans = mid ;
               end = mid -1;
           }
           else if(arr[mid]<x) {
               start = mid + 1;
           }else {
              end = mid -1; 
           }
       }
       return ans;
   }
    vector<int> bs_Method(vector<int>& arr, int k, int x) {
        int high = lowerBound(arr,x);
        int low = high-1;
        while(k--) {
            if(low < 0) {
                high++;
            }else if(high >= arr.size()) {
                low--;
            }
            else if(x-arr[low] > arr[high]-x) {
                high++;
            }else {
                low--;
            }
        }
         return vector<int>(arr.begin()+low+1, arr.begin()+high);
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
       return bs_Method(arr, k,x);
    }
};