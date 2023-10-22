/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if((!headA && headB) || (headA && !headB))
           return NULL;
        // Step 1: finding the length of both LL
        int len1 = 0, len2 = 0;
        ListNode* temp1 = headA;
        ListNode* temp2 = headB;
        while(temp1 || temp2) {
            if(temp1) {
                len1++;
                temp1 = temp1->next;
            }
            if(temp2) {
                len2++;
                temp2 = temp2->next;
            }
        }
        // Step 2: get the len difference and start both LL from same length
        if(len1>len2) {
            temp1 = headA;
            temp2 = headB;
            int i=0;
            while(i<len1-len2) {
                temp1 = temp1->next;
                i++;
            }
            //at this point temp1 and temp2 have the same length
            while(temp1 && temp2) {
                if(temp1 == temp2) {
                    return temp1;
                }
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            return NULL;
        }else {
             temp1 = headA;
            temp2 = headB;
            int i=0;
            while(i<len2-len1) {
                temp2 = temp2->next;
                i++;
            }
             //at this point temp1 and temp2 have the same length
             while(temp1 && temp2) {
                if(temp1 == temp2) {
                    return temp1;
                }
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            return NULL;
        }
        return NULL;
    }
};