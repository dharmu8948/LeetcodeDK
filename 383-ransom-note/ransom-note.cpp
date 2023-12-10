class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.length() > magazine.length()) return false;
        map<char, int> mp;
        for(int i=0;i<ransomNote.size();i++) {
            mp[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.size();i++) {
            if(mp[magazine[i]] > 0) {
                mp[magazine[i]]--;
            }
        }
        for( auto m : mp) {
            if(m.second != 0) return false;
        }
        cout<<endl<<endl;
        return true;
    }
};