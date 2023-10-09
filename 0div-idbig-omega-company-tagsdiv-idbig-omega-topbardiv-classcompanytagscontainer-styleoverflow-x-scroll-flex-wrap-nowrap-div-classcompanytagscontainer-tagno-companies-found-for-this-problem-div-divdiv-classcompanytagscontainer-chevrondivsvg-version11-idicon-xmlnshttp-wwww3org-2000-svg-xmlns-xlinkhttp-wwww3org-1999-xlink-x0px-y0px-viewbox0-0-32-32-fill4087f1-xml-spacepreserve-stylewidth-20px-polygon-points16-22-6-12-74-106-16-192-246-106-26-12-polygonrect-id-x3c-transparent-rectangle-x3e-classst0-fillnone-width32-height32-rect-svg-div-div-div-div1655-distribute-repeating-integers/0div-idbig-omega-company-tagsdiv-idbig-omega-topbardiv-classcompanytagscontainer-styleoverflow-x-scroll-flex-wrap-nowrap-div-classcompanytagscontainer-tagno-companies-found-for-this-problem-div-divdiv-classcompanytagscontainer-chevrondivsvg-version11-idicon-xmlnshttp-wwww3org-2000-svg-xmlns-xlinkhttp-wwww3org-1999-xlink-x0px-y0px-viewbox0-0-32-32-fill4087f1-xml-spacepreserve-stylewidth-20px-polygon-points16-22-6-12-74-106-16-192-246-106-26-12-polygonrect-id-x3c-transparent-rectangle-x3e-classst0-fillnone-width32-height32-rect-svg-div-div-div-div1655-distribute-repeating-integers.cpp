class Solution {
public:
    bool canDistributeHemper(vector<int>& counts, vector<int>& quantity, int ithCustomer) {
        // base case
        if(ithCustomer == quantity.size()) {
            return true;
        }
        
        for(int i=0;i<counts.size();i++) {
            if(counts[i]>=quantity[ithCustomer]) {
                // ek case solve
                counts[i] -= quantity[ithCustomer];
                //baki recursion dekh lega
                if(canDistributeHemper(counts,quantity, ithCustomer + 1)) {
                    return true;
                }
                // backtrack
                counts[i] += quantity[ithCustomer];
            }
            
        }
        return false;
        
    }
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int, int> countMap;
        for(int i=0;i<nums.size();i++) {
            countMap[nums[i]]++;
        }
        vector<int> counts;
        for(auto m: countMap) {
            counts.push_back(m.second);
        }
        //to make it faster sorting quantity in descreasing order
        sort(quantity.rbegin(), quantity.rend());
        return canDistributeHemper(counts, quantity, 0);
    }
};