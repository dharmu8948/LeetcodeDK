class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
         if(hand.size()%groupSize != 0){return false;}
        sort(hand.begin(),hand.end());
        unordered_map<int,int> mp;
        
        for(int i=0;i<hand.size();i++)
        {
            mp[hand[i]]++;
        }
        
        for(int i=0;i<hand.size();i++)
        {
            int grp = groupSize - 1;
            int lastE = hand[i];
            if(mp[lastE] > 0){mp[lastE]--;}
            else {continue;}
            lastE++;
            while(grp > 0)
            {
                if(mp[lastE] > 0){
                    grp--;
                    mp[lastE]--;
                    lastE++;
                }
                else
                {
                    return false;
                }

            }
        }

        
        return true;
    }
};