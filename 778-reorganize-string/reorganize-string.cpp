class node{
    public:
    char data;
    int count;
    node(char c, int d) {
        data = c;
        count = d;
    }
};
class compare{
    public:
    bool operator()(node a, node b) {
        return a.count<b.count;
    }
};
class Solution {
public:
    string reorganizeString(string s) {
       // create mapping 
       int freq[26] = {0};
       for(int i=0;i<s.size();i++) {
           char ch = s[i];
           freq[s[i] - 'a']++;
       }
       priority_queue<node, vector<node>, compare> maxHeap;
       for(int i=0;i<26;i++) {
           if(freq[i] != 0) {
               node temp(i+'a', freq[i]);
               maxHeap.push(temp);
           }
       }
       string ans = "";
       // here we checked >1 because we are getting two values from max heap
       while(maxHeap.size()>1) {
           node first = maxHeap.top();
           maxHeap.pop();
           node second = maxHeap.top();
           maxHeap.pop();
           // adding the node data into ans
           ans += first.data;
           ans += second.data;
           // decresing the count from first and second 
           first.count--;
           second.count--;
           // if still count is not 0 then again add it to max heap
           if(first.count != 0) {
               maxHeap.push(first);
           }
           if(second.count != 0) {
               maxHeap.push(second);
           }
       }
       if(maxHeap.size()==1) {
           node temp = maxHeap.top();
           maxHeap.pop();
           if(temp.count == 1)
              ans += temp.data;
           else
              return "";
       }

       return ans; 
    }

};