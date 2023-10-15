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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = new ListNode(-1);
        ListNode*prev = temp;
        temp->next = head;
        int i=0;
        while(i<left-1) {
            prev = prev->next;
            i++;
        }
        ListNode*curr = prev->next;
        i=0;
        while(i<right-left) {
            ListNode *ptr = prev->next;
            prev->next = curr->next;
            curr->next = curr->next->next;
            prev->next->next = ptr;
            i++;
        }
        return temp->next;
    }
};