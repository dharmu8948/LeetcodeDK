class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
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
            cout<<"key: "<<m.first<<" val "<<m.second<<endl;
            if(m.second != 0) return false;
        }
        cout<<endl<<endl;
        return true;
    }
};