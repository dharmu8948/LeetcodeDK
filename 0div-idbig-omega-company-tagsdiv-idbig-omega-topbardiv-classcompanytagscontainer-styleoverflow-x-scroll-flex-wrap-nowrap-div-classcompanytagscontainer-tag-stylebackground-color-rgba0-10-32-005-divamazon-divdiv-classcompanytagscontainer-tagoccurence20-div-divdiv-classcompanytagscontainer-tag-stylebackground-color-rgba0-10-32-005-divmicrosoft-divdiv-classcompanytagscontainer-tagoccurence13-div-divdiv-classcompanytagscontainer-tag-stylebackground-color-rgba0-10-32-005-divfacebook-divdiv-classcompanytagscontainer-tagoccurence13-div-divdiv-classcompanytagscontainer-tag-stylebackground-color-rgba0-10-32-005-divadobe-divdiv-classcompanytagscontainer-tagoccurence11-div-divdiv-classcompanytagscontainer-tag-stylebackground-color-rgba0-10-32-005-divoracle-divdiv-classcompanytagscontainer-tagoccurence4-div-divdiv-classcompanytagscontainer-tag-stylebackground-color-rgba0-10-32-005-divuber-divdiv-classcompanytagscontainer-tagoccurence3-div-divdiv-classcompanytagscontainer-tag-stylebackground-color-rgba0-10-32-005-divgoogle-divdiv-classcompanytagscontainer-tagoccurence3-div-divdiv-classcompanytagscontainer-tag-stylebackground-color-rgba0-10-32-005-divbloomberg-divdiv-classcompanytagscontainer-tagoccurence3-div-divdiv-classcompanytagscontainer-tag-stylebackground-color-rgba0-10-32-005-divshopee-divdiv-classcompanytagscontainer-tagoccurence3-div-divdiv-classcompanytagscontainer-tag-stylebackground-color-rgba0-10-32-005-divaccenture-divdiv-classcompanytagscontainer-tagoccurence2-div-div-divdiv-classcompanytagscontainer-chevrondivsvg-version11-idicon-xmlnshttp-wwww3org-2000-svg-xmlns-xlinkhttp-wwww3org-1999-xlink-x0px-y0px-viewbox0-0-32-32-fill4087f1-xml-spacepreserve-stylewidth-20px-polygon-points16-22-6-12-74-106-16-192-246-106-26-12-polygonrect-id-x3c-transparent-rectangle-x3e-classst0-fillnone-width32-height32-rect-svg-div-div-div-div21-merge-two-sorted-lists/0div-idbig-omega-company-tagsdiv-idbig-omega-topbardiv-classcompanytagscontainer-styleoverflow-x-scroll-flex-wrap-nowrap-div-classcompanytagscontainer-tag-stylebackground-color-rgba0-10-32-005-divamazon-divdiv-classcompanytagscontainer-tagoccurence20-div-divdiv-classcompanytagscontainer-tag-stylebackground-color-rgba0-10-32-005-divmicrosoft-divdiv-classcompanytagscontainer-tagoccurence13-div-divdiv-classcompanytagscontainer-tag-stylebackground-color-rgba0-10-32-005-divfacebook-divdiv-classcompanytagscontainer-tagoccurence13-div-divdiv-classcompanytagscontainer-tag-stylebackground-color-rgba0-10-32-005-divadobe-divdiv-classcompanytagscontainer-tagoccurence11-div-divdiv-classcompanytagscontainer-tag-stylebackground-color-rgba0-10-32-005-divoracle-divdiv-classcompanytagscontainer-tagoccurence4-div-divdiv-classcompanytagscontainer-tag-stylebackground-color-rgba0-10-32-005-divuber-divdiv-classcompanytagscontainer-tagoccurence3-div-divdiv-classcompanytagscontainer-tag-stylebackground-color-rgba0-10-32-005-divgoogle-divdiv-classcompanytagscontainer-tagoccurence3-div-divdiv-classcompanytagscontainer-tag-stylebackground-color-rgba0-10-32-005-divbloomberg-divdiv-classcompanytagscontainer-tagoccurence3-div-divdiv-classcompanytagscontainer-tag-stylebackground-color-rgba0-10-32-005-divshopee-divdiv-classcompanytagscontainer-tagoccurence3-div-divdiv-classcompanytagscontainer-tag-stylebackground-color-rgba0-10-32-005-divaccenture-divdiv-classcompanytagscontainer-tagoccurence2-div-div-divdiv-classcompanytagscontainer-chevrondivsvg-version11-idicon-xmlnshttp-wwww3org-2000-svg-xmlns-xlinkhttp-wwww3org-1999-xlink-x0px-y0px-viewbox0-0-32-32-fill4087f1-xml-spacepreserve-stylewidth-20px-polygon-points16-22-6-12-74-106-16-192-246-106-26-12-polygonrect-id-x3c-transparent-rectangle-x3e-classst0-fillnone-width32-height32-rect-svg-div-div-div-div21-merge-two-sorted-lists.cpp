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
        ListNode* temp = new ListNode(0);
        ListNode* currentNode  = temp;
        while(list1 && list2){
            if(list1->val<list2->val){
                currentNode->next=list1;
                list1 = list1->next;
            }else{
                currentNode->next = list2;
                list2 = list2->next;
            }
            currentNode = currentNode->next;
        }
        if(list1){
            currentNode->next = list1;
            list1 = list1->next;
        }
        if(list2){
            currentNode->next = list2;
            list2 = list2->next;
        }
        return temp->next;
    }
};