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
    int getLength(ListNode* head) {
        int count = 0;
        while(head) {
            head = head->next;
            count++;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        // base case
        if(!head || !head->next) {
            return head;
        }
        // bruteforce approach
        // get total length and find middle
       int length = getLength(head);
       int ans = length/2;
        ListNode* temp = head;
        int cnt = 0;
        while(cnt<ans) {
            temp = temp->next;
            cnt++;
        }
        return temp;
    }
};