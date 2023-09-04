class Solution {
public:
    int compress(vector<char>& s) {
        int count = 1, index = 0, prev = s[0];
        int n  = s.size();
        for(int i=1 ; i<n ; i++) {
            if(s[i]==prev) {
                count++;
            }
           
            else {
                s[index++] = prev;
                if(count>1) {
                    int start = index;
                    while(count>0) {
                        s[index++] = (count%10) + '0';
                        count /= 10;
                    }
                    // handling the case a->1, b->12 will come b->21 without below reverse that's why we are doing reverse
                    reverse(s.begin()+start, s.begin()+index);
                }
                count = 1;
            }
            prev = s[i];
        }
       s[index++] = prev;
       if(count>1) {
           int start = index;
           while(count>0) {
                s[index++] = (count%10) + '0';
                count /= 10;
            }
             reverse(s.begin()+start, s.begin()+index);
       }
       return index;
    }
};