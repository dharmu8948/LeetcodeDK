class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi1 = INT_MIN;
        int maxi2 = INT_MIN;
        int index = 0;
      for(int i=0;i<n;i++) {
          if(maxi1<nums[i]) {
              index = i;
              maxi1 = nums[i];
          } 
      }
      for(int i=0;i<n;i++) {
          if(maxi2<nums[i] && i != index) maxi2 = nums[i];
      }
      cout<<"maxi1:: "<<maxi1<<" maxi2:: "<<maxi2<<endl;
      return (maxi1-1)*(maxi2-1);
    }
};