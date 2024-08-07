class Solution {
public:
        vector<pair<int,string>> mp={{1000000000,"Billion"},{1000000,"Million"},{1000,"Thousand"},{100,"Hundred"},{90,"Ninety"},{80,"Eighty"},{70,"Seventy"},{60,"Sixty"},{50,"Fifty"},{40,"Forty"},{30,"Thirty"},{20,"Twenty"},{19,"Nineteen"},{18,"Eighteen"},{17,"Seventeen"},{16,"Sixteen"},{15,"Fifteen"},{14,"Fourteen"},{13,"Thirteen"},{12,"Twelve"},{11,"Eleven"},{10,"Ten"},{9,"Nine"},{8,"Eight"},{7,"Seven"},{6,"Six"},{5,"Five"},{4,"Four"},{3,"Three"},{2,"Two"},{1,"One"},{0,"Zero"}};

    string numberToWords(int num) {
        // base case
        if(num == 0) {
            return "Zero";
        }
        
        for(auto it: mp) {
            if(num>=it.first) {
                string firstPart = "";
                // if num> 100 then extracting the first part of String in num
                if(num>=100) {
                    firstPart = numberToWords(num/it.first)+" ";
                }
                // extracting the middle part of String in num
                string middlePart = it.second;
                string lastPart = "";
                // if num> 0 and num % it.first also != 0 then extracting the last part of String in num
                if(num != 0 && (num % it.first) != 0) {
                    lastPart = " "+numberToWords(num%(it.first));
                }
                // combining the first middle and last String to get the required result
                return firstPart + middlePart + lastPart;
            }
        }
        return "";
    }
};