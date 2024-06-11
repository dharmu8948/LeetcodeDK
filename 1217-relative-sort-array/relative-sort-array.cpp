class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        set<int> temp;
        sort(arr1.begin(), arr1.end());
        for(int num : arr2) {
           for(int i=0;i<arr1.size();i++) {
            if(arr1[i] == num){
                temp.insert(num);
                ans.push_back(num);
            } 
           }
        }
        for(int i=0;i<arr1.size();i++) {
            if(!temp.contains(arr1[i])) ans.push_back(arr1[i]);
        }
        return ans;
    }
};