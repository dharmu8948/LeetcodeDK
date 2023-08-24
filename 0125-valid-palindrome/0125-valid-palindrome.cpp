class Solution {
private:
     bool validChar(char ch) {
         if((ch>='a' && ch<='z') ||(ch>='A' && ch<='Z')|| (ch>='0' && ch<='9')) {
             return true;
         }
         else return false;
     }
     char toLowerCase(char ch) {
         if((ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
         return ch;
         else {
             char temp = ch-'A'+'a';
             return temp;
         }
     }
     bool chekPolindrome(string s) {
         int start = 0, end = s.size()-1;
         while(start<=end) {
             if(s[start] != s[end])
             return false;
             else {
                 start++;
                 end--;
             }
         }
         return true;
     }
public:
    bool isPalindrome(string s) {
       
       string temp = "";
       // faltu character hata do 
       for(int i=0;i<s.size();i++) {
           if(validChar(s[i])) {
               temp.push_back(s[i]);
           }
       }
       // making into lowercase
       for(int i=0;i<temp.size();i++) {
           temp[i] = toLowerCase(temp[i]);
       }
       return chekPolindrome(temp);
    }
};