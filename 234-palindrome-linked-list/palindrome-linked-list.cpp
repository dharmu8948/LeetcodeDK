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
    bool isPalindrome(ListNode* head) {\
      //  Approach 1
      /*
        if(!head || !head->next) return true;
        ListNode* temp = head;
        vector<int> arr;
        while(temp) {
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n = arr.size()-1;
        for(int i=0,j = n;i<j;i++,j--) {
            if(arr[i] != arr[j]) return false;
        }
        return true;
        */
        // Approach 2
               // Steps to follow:
        // 1_) Find the middle element
        ListNode *slow = head, *fast = head;
        while(fast!=NULL && fast->next !=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        // 2_) if the no of nodes are odd then move slow to one point
        if(fast != NULL && fast->next == NULL){
            slow = slow->next;
        }
        //3_) Reverse the end half
        ListNode *prev = NULL;
        ListNode *temp = NULL;
        while(slow != NULL && slow->next != NULL){
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        if(slow != NULL){
            slow->next = prev;
        }
        //4_) Compare the start half and end half if found any inequality then return false otherwise return true.
        fast = head;
        while(slow && fast){
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;

    }
};