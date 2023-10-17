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
    int getLength(ListNode* &head) {
        ListNode* temp = head;
        int count = 0;
        while(temp) {
            temp = temp->next;
            count++;
        }
        return count;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next) 
          return head;
        int len = getLength(head);
        if(k>len) {
            return head;
        }
    
        //Step A: reverse K nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = curr->next;
        int count = 0;
        while(count<k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }
        //STEP B: recursive call
        // it means we still have Node to reverse
        if(forward != NULL) {
            head->next = reverseKGroup(forward, k);
        }
        // Step C: return head of the modified LL
        return prev;
    }
};