class Solution {
public:
    int countNumberOfVowels(string s) {
        int count =0;
        for(int i=0;i<s.size();i++) {
            if(s[i]=='a' || s[i] == 'e'||s[i]=='i' || s[i] == 'o'||s[i] =='u') count++;
        }
        return count;
    }
    bool halvesAreAlike(string s) {
        int size = s.size();
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
       string a = s.substr(0,size/2);
       string b = s.substr(size/2,size/2);
       int firstPart = countNumberOfVowels(a);
       int secondPart = countNumberOfVowels(b);
       if(firstPart == secondPart) {
           return true;
       }
       return false;;

    }
};