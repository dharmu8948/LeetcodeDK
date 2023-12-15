class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
      int i, j, l = paths.size(), flag;
        for (i = 0; i < l; i++){
            flag = 0;
            for (j = 0; j < l; j++){
                if (paths[i][1] == paths[j][0]){
                    flag = 1;
                    break;
                }
            }
            if (flag == 0){
                return paths[i][1];
            }
        }
        return NULL;
    }
};