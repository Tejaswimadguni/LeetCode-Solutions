/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
         map<ListNode*,bool>vstd;
       ListNode* temp=head;
       int ans=0;

       while(temp){
        if(vstd[temp]){
            return temp;
            
        }
        vstd[temp]=true;
        temp=temp->next;
       }

       
        return NULL;
    }
};