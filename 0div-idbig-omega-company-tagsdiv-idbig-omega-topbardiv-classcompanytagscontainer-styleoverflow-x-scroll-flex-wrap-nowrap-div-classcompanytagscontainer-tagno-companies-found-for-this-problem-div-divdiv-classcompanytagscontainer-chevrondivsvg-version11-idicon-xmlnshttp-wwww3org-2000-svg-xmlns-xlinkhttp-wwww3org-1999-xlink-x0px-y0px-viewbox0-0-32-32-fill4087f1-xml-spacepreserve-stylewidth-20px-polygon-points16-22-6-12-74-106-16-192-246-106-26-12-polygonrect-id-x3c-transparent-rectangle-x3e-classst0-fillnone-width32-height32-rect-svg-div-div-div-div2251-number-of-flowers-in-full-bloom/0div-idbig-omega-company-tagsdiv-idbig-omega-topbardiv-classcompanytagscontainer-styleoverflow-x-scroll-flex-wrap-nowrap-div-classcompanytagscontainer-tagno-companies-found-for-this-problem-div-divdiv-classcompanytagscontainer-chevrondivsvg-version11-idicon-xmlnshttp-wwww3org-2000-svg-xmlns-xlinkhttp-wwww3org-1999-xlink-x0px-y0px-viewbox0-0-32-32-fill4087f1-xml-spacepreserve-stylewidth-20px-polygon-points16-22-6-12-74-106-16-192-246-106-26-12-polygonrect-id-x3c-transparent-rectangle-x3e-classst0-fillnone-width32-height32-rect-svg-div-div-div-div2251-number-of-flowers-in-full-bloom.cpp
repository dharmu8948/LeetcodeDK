class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        map<int,int> mp;// keep the ordering
        for(int p: people)
            mp[p]=0;
       
       for(auto& fl: flowers){
            int s=fl[0], t=fl[1]+1;
            if (mp.count(s)) mp[s]++;
            else mp[s]=1;
            if (mp.count(t)) mp[t]--;
            else mp[t]=-1;
       }

       int bloom = 0;
       for(auto& [p,bl]: mp){// mp has an order
           bl+= bloom;
           bloom = bl;
       }
       int n = people.size();
       vector<int> ans(n);
       for(int i= 0; i < n; i++){
           ans[i]= mp[people[i]];
       }
       return ans; 
    }
};