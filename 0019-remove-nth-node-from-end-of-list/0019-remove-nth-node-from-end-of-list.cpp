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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         int len = 0;
         ListNode* temp = head;
         while(temp) {
             len++;
             temp = temp->next;
         }
        // n > length, then we can't remove node
    if (n > len)
    {
        return head;
    }
     
    // We need to remove head node
    else if (n == len) {
        return head->next;
    }
    else
    {
        // Remove len - n th node from starting
        int diff = len - n;         
        ListNode* prev= NULL;      
        ListNode* curr = head;        
        for(int i = 0;i < diff;i++){
            prev = curr;           
            curr = curr->next;     
        }
        prev->next = curr->next;
        return head;
    }
    }
};