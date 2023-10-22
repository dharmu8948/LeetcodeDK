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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // edge cases
        if(!list1 && !list2) {
            return NULL;
        }
        if(!list1 && list2) {
            return list2;
        }
        if(list1 && !list2) {
            return list1;
        }
        // created a NewNode
        ListNode* newNode = new ListNode(-1);
        // pointer to point newNode head
        ListNode* head = newNode;
        // created two pointer to track list1 and list2
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        // in loop start comparing the data do increase the newNode, temp1 and temp2 accordingly
        while(temp1 && temp2) {
            if(temp1->val <= temp2->val) {
                newNode->next = temp1;
                temp1 = temp1->next;
            }else {
                 newNode->next = temp2;
                temp2 = temp2->next;
            }
            newNode = newNode->next;
            newNode->next = NULL;
        }
        // if temp1 is stil not null
        if(temp1) {
            newNode->next = temp1;
        }
        // if temp2 is still not null
        else if(temp2) {
            newNode->next = temp2;
        }
        // return head ka next to discard the dummy node with -1 data
        return head->next;
    }
};