class Solution {
public:
    string reorganizeString(string s) {
       vector<int> count(26,0);
        for(char c:s)count[c-'a']++;
        int maxCount=0,letter=0;
        for(int i=0;i<count.size();i++){
            if(count[i]>maxCount){
                maxCount=count[i];
                letter=i;
            }
        }
        if(maxCount>(s.length()+1)/2)return "";
        string ans=s;
        int index=0;
        while(count[letter]!=0){
            ans[index]=char(letter+'a');
            index+=2;
            count[letter]--;
        }
        for(int i=0;i<count.size();i++){
            while(count[i]>0){
                if(index>=s.size())index=1;
                ans[index]=char(i+'a');
                index+=2;
                count[i]--;
            }
        }
        return ans;
    }
};