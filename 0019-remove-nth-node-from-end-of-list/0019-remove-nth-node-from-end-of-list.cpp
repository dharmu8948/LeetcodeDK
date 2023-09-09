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
         ListNode* fast = head;
         while(temp) {
              // making fast nth node from first
             if(len<n) {
                 fast = fast->next;
             }
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
        temp = head;
       // once fast getting null temp will point to that node which we need to delete
        while(fast) {
            fast = fast -> next;
            temp = temp->next;
        }
        // initialize fast as head to iterate again from first node
        fast = head;
        // this loop continue till fast ka next temp ke eqaul nahi ho jata
        while(fast->next != temp) {
            fast = fast->next;
        }
        // now we point point fast ka next to temp ka next to remove temp
        fast->next = temp->next;
        // making temp ka next as null as it is no longer needed
        temp->next = NULL;

        // returning the result
       return head;
    }
    }
};