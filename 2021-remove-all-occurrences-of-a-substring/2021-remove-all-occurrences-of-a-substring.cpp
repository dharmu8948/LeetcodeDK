class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);
        while(pos != string::npos) {  // here npos is inbuilt consnatant variable which shows that no position is available
        s.erase(pos,part.length());
         pos = s.find(part);
        }
        return s;
    }
};