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
    ListNode* sortList(ListNode* head) {
        // edge case
        if(!head) 
         return head;
         // created a vector
        vector<int> arr;
        // stored the head into temp
        ListNode* temp = head;
        // pushing the elements into array
        while(temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        // sort the array
        sort(arr.begin(), arr.end());
        // create new LL
        ListNode* head2 = new ListNode();
        ListNode* temp2 = head2;
        // copy the elements into list
        for(int i=0;i<arr.size();i++) {
            ListNode* curr = new ListNode(arr[i]);
            temp2->next = curr;
            temp2 = curr;
        }
        return head2->next;
    }
};