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
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return;

        // Step 1: Find the middle of the list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // Step 2: Reverse the second half of the list
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while (slow != nullptr) {
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        // Step 3: Merge the two halves
        ListNode* firstHalf = head;
        ListNode* secondHalf = prev; // prev now points to the head of the reversed second half
        while (secondHalf->next) {
            next = firstHalf->next;
            prev = secondHalf->next;

            firstHalf->next = secondHalf;
            secondHalf->next = next;
            
            firstHalf = next;
            secondHalf = prev;
        }
        // if(!head || !head->next) return ;
        // vector<int> arr;
        // ListNode* temp = head;
        // while(temp) {
        //     arr.push_back(temp->val);
        //     temp = temp->next;
        // }
        // ListNode* ans = new ListNode(0);
        // temp = ans;
        // int i=0,j = arr.size()-1;
        // while(i < j) {
        //  //   cout<<arr[i]<<"  "<<arr[j]<<endl;
        //     temp->next = new ListNode(arr[i]);
        //     temp= temp->next;
        //     temp->next = new ListNode(arr[j]);
        //     temp = temp->next;
        //     i++;j--;
        // }
       
        // head = ans->next;
    }
};