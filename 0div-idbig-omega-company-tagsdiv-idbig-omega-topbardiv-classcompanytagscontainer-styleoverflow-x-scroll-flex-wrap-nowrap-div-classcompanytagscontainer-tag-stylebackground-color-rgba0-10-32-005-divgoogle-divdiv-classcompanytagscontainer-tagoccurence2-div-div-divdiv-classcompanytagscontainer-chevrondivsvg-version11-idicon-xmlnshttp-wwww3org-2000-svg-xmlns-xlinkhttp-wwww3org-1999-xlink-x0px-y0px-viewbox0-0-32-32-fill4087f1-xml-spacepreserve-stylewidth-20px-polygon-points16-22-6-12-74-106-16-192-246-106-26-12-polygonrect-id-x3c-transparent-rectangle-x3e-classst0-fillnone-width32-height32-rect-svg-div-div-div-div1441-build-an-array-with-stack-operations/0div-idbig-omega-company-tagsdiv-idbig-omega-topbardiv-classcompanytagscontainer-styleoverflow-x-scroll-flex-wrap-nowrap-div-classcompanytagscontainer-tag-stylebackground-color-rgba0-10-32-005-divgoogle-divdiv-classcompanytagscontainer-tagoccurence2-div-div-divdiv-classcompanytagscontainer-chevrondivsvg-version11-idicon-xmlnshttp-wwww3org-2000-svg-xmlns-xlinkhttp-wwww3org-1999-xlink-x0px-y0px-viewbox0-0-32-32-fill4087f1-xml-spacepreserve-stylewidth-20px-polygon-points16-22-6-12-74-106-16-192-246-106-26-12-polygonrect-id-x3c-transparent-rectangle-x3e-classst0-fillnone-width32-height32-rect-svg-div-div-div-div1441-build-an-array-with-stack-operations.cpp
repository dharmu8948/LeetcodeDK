class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans; // to store results
        
        int j=0; // initialization of beginning of the vector
        
        for(int i=1;i<=n;i++) { // trversing all numbers
            
           // if the target array is already build, stop reading more elements
           if(j == target.size()) break;
            
           // Read a new element from beginning the list
           ans.push_back("Push");
            
           //If the new element metches the target list element then increment the iterator of the list
           if(target[j] == i) ++j;
           // Else "Pop" the element from the list
            
           else ans.push_back("Pop");
        }
        return ans;
    }
};