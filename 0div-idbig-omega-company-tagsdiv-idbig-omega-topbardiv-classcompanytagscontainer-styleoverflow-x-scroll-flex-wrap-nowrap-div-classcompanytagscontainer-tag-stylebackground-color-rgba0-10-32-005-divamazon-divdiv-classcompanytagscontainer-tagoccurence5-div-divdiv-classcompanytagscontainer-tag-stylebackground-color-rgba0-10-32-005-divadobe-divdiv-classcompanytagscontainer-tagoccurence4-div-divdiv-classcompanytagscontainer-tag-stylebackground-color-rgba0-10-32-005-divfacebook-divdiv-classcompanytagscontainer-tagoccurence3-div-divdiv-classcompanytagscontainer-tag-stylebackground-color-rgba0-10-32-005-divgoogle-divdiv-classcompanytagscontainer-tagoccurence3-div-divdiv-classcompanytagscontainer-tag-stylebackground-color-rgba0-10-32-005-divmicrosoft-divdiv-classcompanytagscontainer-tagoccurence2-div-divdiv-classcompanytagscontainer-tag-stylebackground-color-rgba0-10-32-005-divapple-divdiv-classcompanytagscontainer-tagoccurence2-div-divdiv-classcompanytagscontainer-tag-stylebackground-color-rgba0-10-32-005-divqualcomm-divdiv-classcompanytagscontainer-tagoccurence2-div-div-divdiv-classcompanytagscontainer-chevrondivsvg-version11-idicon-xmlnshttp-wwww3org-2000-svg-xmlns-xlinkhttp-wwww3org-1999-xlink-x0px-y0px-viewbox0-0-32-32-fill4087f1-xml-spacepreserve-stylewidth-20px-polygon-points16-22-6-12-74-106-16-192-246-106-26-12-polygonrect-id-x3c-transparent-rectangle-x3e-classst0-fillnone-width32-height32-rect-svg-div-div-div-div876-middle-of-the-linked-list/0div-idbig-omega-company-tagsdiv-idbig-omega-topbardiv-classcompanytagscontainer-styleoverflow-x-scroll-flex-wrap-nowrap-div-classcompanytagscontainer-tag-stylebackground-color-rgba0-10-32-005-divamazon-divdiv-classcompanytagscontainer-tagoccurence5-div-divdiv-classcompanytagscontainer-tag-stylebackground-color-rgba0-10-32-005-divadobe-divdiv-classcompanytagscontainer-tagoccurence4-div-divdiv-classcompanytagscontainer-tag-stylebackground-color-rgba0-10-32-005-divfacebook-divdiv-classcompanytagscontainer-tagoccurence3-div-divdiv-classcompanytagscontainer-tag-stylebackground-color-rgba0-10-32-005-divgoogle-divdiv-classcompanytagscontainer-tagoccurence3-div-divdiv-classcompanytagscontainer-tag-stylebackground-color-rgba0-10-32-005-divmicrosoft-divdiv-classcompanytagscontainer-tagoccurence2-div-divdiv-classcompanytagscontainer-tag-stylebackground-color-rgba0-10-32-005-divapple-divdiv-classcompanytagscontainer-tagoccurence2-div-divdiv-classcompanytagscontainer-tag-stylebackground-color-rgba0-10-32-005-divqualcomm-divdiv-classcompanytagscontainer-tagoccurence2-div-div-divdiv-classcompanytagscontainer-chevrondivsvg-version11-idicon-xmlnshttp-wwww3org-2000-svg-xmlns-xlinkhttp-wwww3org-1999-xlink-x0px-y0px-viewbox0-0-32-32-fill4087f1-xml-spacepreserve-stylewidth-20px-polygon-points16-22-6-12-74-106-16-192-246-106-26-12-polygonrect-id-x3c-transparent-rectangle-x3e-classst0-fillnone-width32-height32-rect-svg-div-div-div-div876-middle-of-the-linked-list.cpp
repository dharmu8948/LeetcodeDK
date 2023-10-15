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
        // if two node only
        if(head->next->next == NULL)
            return head->next;
        // bruteforce approach O(n) +O(n/2) = O(n)
        // get total length and find middle
     /*  int length = getLength(head);
       int ans = length/2;
        ListNode* temp = head;
        int cnt = 0;
        while(cnt<ans) {
            temp = temp->next;
            cnt++;
        }
        return temp;
        */
        // Optimal Solution
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast) {
            fast = fast->next;
            if(fast != NULL) {
                fast = fast->next;
            }
            slow = slow->next;
        }
        return slow;
    }
};