class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mp;
        set<int> st;
        vector<int> v;
        for(int i=0;i<arr.size();i++) {
            mp[arr[i]]++;
        }
        for(auto m : mp) {
           st.insert(m.second);
           v.push_back(m.second); 
        }
        if(st.size() == v.size()) return true;
        else return false;
    }
};