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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* main = new ListNode(-1);
        ListNode* head = main;
        int actualSum = 0, carry = 0;
        while(temp1 && temp2) {
            int sum = temp1->val + temp2->val + carry;
            actualSum = sum>9 ? sum%10 : sum;
            carry = sum/10;
            head->next = new ListNode(actualSum);
            head = head->next;
            temp1 = temp1->next;
            temp2 = temp2->next;        }
        if(temp1) {
            while(temp1) {
                int sum = temp1->val + carry;
                actualSum = sum>9 ? sum%10 : sum;
                carry = sum/10;
                head->next = new ListNode(actualSum);
                head = head->next;
                temp1 = temp1->next;
            }
        }else if(temp2) {
            while(temp2) {
                int sum = temp2->val + carry;
                actualSum = sum>9 ? sum%10 : sum;
                carry = sum/10;
                head->next = new ListNode(actualSum);
                head = head->next;
                temp2 = temp2->next;
            }
        }
        if(carry) {
            head->next = new ListNode(carry);
        }
        return main->next;
    }
};