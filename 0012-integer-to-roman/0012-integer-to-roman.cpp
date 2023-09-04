class Solution {
public:
    string intToRoman(int num) {
        // storing roman Symbols
         string romanSymbol[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
         // storing corresponding values
        int values[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string ans = "";
        for(int i=0;i<13;i++) {
            while(num>=values[i]) { // for example num = 999
                ans += romanSymbol[i]; // ans += CM
                num -= values[i];     // num = 999-900 and so on...
            }
        }
        return ans;
    }
};