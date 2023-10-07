class Solution {
public:
    void permuteUnique_Helper(vector<int>& nums, set<vector<int>>& set, vector<int> temp, int index){
        // base case
        if(index == nums.size()){
            set.insert(temp);
            return;
        }
        
        for(int i=index; i<temp.size(); i++){
            // ek case solve
            swap(temp[index], temp[i]);
            // baki permutation
            permuteUnique_Helper(nums, set, temp, index+1);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> temp = nums;
        // sorting it get unique set
        sort(temp.begin(), temp.end());
        // created set to avoid the duplicate collections
        set<vector<int>> set;
        permuteUnique_Helper(nums, set, temp, 0);
        // till now we avoided the duplicacy and and return back in return type of the method 
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};