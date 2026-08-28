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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)return NULL;
        if(!head->next)return head;
        ListNode* eve=head->next;
        ListNode* fsteve=head->next;
        ListNode* od=head;

        while( eve && eve->next ){
            
            od->next=eve->next;
            od=od->next;
            eve->next=od->next;
            eve=eve->next;

        }
        od->next=fsteve;
        return head;
    }
};