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
    ListNode* removeElements(ListNode* head, int value) {
        if(head==NULL){
            return NULL;
        }
        while(head && head->val == value){
        ListNode* delt = head;
        head = head->next;
        delete delt;
        }

        ListNode* temp=head;
        ListNode* prev=nullptr;
        while(temp && temp->next){
            if(temp->next->val==value){
                prev=temp;
                ListNode* del=temp->next;
                prev->next=temp->next->next;
                delete del;
                
            }else{
            prev=temp;
            temp=temp->next;
            }
        }
        
    return head;
    }
};