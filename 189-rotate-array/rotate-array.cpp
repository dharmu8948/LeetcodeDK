class Solution {
public:
    void rev(vector<int>&arr, int left, int right) {
        if(arr.size()==0 || arr.size()==1) return ;
        while(left<right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;right--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        vector<int>v;
        int n=nums.size();
        k=k%n;   // k is greater than n,this operation will be used
        for(int i=n-k;i<n;i++)
            v.push_back(nums[i]);
        for(int i=0;i<n-k;i++)
            v.push_back(nums[i]);
        swap(nums,v); 
    }
};