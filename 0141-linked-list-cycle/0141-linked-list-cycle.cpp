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
    bool hasCycle(ListNode *head) {
       map<ListNode*,bool>vstd;
       ListNode* temp=head;

       while(temp){
        if(vstd[temp]){
            return true;
            
        }
        vstd[temp]=true;
        temp=temp->next;
       }

       return false;
    }
};