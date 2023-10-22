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
    ListNode* mergeNodes(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* temp = head->next;
        ListNode* mainNode = new ListNode();
        ListNode* headTemp = mainNode;
        int sum =0;
        while(temp) {
            if(temp->val != 0) {
                sum += temp->val;
            }else {
                headTemp->next = new ListNode(sum);
                headTemp = headTemp->next;
                sum = 0;
            }
            temp = temp->next;
        }
        return mainNode->next;
    }
};