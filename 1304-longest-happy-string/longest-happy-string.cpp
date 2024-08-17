class node {
    public:
    char data;
    int count;
    node(char d, int c) {
        data = d;
        count = c;
    }
};
class compare {
    public:
    bool operator()(node a, node b) {
        return a.count<b.count;
    }
};
class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<node, vector<node>, compare> maxH;
        if(a>0) {
            node temp('a',a);
            maxH.push(temp);
        }
         if(b>0) {
            node temp('b',b);
            maxH.push(temp);
        }
         if(c>0) {
            node temp('c',c);
            maxH.push(temp);
        }

        string ans = "";
        while(maxH.size()>1) {
            node first = maxH.top(); maxH.pop();
            node second = maxH.top(); maxH.pop();

            if(first.count>=2) {
                ans += first.data;
                ans += first.data;
                first.count -= 2;
            }else {
                ans += first.data;
                first.count--;
            }
            if(second.count>=2 && second.count >= first.count) {
                ans += second.data;
                ans += second.data;
                second.count -= 2;
            }else {
                ans += second.data;
                second.count--;
            }
            if(first.count>0) maxH.push(first);
            if(second.count>0) maxH.push(second);
        }

        if(maxH.size() == 1) {
            node temp = maxH.top();
            maxH.pop();
             if(temp.count>=2) {
                ans += temp.data;
                ans += temp.data;
                temp.count -= 2;
            }else {
                ans += temp.data;
                temp.count--;
            }

        }
        return ans;
    }
};