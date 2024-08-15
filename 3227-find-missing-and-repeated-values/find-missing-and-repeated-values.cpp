class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int max = n * n;
		int repeated, missing;
		//Create list to check n² numbers
        vector<int> list(max, 0);
		
		//Taking down all numbers inside grid onto list
        for(int i=0; i<n; i++){ 
            for(int j=0; j<n; j++){
				//Eg. There are two 9, list[8] == 2
                list[grid[i][j] - 1]++;
            }
        }
		
		//Check what number is missing or repeated inside list
        for(int num=1; num <=max; num++){
            if(list[num-1] == 0) missing = num;
            if(list[num-1] > 1) repeated = num;
        }
        return {repeated, missing};
    }
};