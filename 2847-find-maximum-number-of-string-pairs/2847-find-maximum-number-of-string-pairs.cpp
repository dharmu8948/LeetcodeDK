class Solution {
public:
    string rvrse(string &str) {
        int i=0,j = str.size()-1;
        while(i<j) {
            char ch = str[i];
            str[i] = str[j];
            str[j] = ch;
            i++;
            j--;
        }
        return str;
    }
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        int n = words.size();
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                string str = rvrse(words[j]);
                if(words[i] == str) {
                    count++;
                }
            }
        }
        return count;
    }
};