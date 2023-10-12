class OrderedStream {
public:
    map <int, string> mp;
    int count = 1;
    OrderedStream(int n) {
        
    }
    
    vector<string> insert(int idKey, string value) {
        mp.insert({idKey, value});
        vector <string> v1;
        for(auto i : mp) {
            if(i.first == count) {
                v1.push_back(i.second);
                count++;
            }
        }
        return v1;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */