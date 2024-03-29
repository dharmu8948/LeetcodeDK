/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
         string str;
        ListNode* temp = head;
        while(temp) {
            str += to_string(temp->val);
            temp = temp->next;
        }
        reverse(str.begin(), str.end());
        cout<<str<<endl;
        int ans = 0, index = 0;
        for(char ch : str) {
            int num = ch - '0';
            ans += num * pow(2,index++);
        }
        return ans;
    }
};