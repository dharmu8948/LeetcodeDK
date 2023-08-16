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
    // int GCD(int a, int b) {
    //     if(a==b)
    //     return a;
    //     else if(a>b)
    //     return GCD(a%b, b);
    //     else 
    //     return GCD(a, b%a);
    // }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || head->next == NULL) {
            return head;
        }
        ListNode* ans = new ListNode(0);
        ListNode* p = ans;
        while(head->next) {
            int first = head->val;
            int second = head->next->val;
            ans->next = new ListNode(first);
            ans = ans->next;
            ans->next = new ListNode(__gcd(first,second));
            ans = ans->next;
            head = head->next;
        }
        ans->next = head;
        return p->next;
    }
};