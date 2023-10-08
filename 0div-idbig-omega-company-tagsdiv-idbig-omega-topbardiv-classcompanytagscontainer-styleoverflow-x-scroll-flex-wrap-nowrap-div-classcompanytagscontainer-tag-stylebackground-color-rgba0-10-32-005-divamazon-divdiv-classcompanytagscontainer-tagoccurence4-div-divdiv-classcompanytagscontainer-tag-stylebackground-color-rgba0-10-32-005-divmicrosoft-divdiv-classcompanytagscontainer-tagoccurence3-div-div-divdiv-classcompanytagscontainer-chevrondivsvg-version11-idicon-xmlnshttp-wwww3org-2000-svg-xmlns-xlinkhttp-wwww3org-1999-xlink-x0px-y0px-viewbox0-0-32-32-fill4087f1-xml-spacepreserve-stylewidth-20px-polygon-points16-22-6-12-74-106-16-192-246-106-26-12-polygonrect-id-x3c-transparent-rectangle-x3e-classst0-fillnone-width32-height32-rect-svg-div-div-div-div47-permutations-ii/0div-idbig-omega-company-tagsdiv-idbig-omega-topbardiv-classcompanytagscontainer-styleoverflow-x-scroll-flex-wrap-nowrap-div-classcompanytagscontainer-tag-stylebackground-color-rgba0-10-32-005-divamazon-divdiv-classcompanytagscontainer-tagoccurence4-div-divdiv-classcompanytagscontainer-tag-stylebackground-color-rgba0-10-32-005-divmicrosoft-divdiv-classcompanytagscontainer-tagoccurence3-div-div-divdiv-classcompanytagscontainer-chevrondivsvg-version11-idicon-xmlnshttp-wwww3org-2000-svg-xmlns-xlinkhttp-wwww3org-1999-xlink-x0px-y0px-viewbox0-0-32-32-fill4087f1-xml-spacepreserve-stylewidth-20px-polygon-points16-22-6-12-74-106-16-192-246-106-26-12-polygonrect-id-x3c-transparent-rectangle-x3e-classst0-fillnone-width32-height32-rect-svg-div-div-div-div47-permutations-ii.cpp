class Solution {
public:
    void permuteUnique_Helper(vector<int>& nums, vector<vector<int>>& output, int index){
        // base case
        if(index == nums.size()){
            output.push_back(nums);
            return;
        }
        unordered_map<int, bool> visited;
        for(int i=index; i<nums.size(); i++){
            if(visited.find(nums[i]) != visited.end()) {
                continue;
            }
            visited[nums[i]] = true;
            // ek case solve
            swap(nums[index], nums[i]);
            // baki permutation
            permuteUnique_Helper(nums, output, index+1);
            // Since we modifying main array so backtracking will required
             swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> output;
       
        permuteUnique_Helper(nums, output, 0);
       
        return output;
    }
};