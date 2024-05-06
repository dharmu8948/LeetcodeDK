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
    ListNode* removeNodes(ListNode* head) {
        // Recursive Approach
        if (head == nullptr) return NULL;
        head->next = removeNodes(head->next);
        return (head->next && head->val < head->next->val) ? head->next : head;
        // Brute force Approach
    /*    if(!head || !head->next) return head;
        vector<int> arr;
        vector<int> help;
        ListNode* temp = head;
        while(temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        reverse(arr.begin(), arr.end());
        int maxi = arr[0];
        for(int i=0;i<arr.size();i++) {
            if(maxi <= arr[i]) {
                maxi = arr[i];
                help.push_back(maxi);
            }
        }
        ListNode* ans = new ListNode(-1);
        ListNode* temp2 = ans;
        int i = help.size()-1;
        while(i>=0) {
            temp2->next = new ListNode(help[i--]);
            temp2 = temp2->next;
        }
        return ans->next;
        */
    }
};