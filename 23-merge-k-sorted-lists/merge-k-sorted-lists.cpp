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
 class compare{
    public:
    bool operator()(ListNode* a, ListNode* b){
    return a->val > b->val;

    }
 };
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Approach 1
        /*
        vector<int> arr;
        for(int i=0;i<lists.size();i++) {
            ListNode* temp = lists[i];
            while(temp) {
                arr.push_back(temp->val);
                //cout<<temp->val<<" ";
                temp = temp->next;
            }
        }
        sort(arr.begin(), arr.end());
        ListNode* ans = new ListNode();
        ListNode* help = ans;
        for(int i=0;i<arr.size();i++) {
            help->next = new ListNode(arr[i]);
            help = help->next;
        }
        return ans->next;
        */

        // Approach 2
         if(lists.empty()){
            return NULL;
        }

        
     priority_queue<ListNode*, vector<ListNode*>, compare> minheap;
    for(int i=0;i<lists.size();i++){
        if(lists[i]!=NULL)
    minheap.push(lists[i]);
    }  
    
    ListNode* head=NULL;
    ListNode* temp1;
    while(!minheap.empty()){
    ListNode* temp= minheap.top();
   
    if(head==NULL){
    head=temp;
     temp1=temp;}
     else{
     temp1->next=temp;
     temp1=temp;}

    minheap.pop();
    if(temp->next!=NULL){
        minheap.push(temp->next);
    }


 
    }
    if(temp1!=NULL)
    temp1->next=NULL;
    return head; 
    }
};