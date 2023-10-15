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
    void solveWithRec(ListNode* &head, ListNode* curr, ListNode* prev) {
        if(curr == NULL) {
            head = prev;
            return;
        }
        
        ListNode* forward = curr->next;
        solveWithRec(head, forward, curr);
        curr->next = prev;
    
    }
    ListNode* reverseList(ListNode* head) {
       
        if(!head || !head->next)
             return head;
        ListNode* prev = NULL;
        ListNode*curr = head;
         // Approach 1(Iterative Approach)
        /*
        ListNode* forward = NULL;
        while(curr) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
        */
        // Approach 2 (using Recusrion)
        solveWithRec(head, curr, prev);
        return head;
    }
};