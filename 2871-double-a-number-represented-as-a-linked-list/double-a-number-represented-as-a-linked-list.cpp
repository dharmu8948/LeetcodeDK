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
    ListNode* doubleIt(ListNode* head) {
       ListNode* head1 = new ListNode();
        head1->next = head;

        ListNode* left = head1;
        ListNode* right = head;
        while (right != NULL) {
            if (right->val * 2 >= 10) {
                left->val += 1;
            }
            right->val = (right->val * 2) % 10;
            left = left->next;
            right = right->next;
        }
        return head1->val > 0 ? head1 : head;
    }
};