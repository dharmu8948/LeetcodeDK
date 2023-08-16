class Solution {
public:
    int findLucky(vector<int>& arr) {
        // first approach using loop
     /*   int maxi = -1;
        for(int i=0;i<arr.size();i++) {
            int count = 0;
            for(int j=0;j<arr.size();j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
            if(arr[i] == count)
            maxi = max(maxi, count);
        }
        return maxi; */
        // second approach with extra space
        int maxi = -1;
        unordered_map<int, int> hash;
        for(int i=0;i<arr.size();i++) {
            hash[arr[i]]++;
        }
       for(auto x : hash) {
           if(x.first == x.second) {
                maxi = max(maxi, x.second);
           }
       }
       return maxi;
    }
};