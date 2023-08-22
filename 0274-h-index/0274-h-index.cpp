class Solution {
public:
    int hIndex(vector<int>& citations) {
        // step 1
        sort(citations.begin(), citations.end());
        // step 2
        int h = citations.size();
        // step 3 
        for(int i=0;i<citations.size();i++) {
            if(citations[i]>= h)
            return h;
            else {
                if(h == 1 && citations[i]!= 0)
                return 1;
                h--;
            }
        }
        return h;
        
    }
};