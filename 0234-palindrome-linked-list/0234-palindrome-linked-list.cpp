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

private:
    ListNode* mid(ListNode*head){
        ListNode*slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        return slow;
    }

    ListNode* rev(ListNode* head){
        ListNode*curr=head;
        ListNode*prev=NULL;
        ListNode*next=NULL;

        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }

        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)return true;
        ListNode*middle=mid(head);
        ListNode*half=rev(middle->next);
        ListNode*temp=half;
        ListNode*curu=head;
        while(temp){
            if(curu->val!=temp->val)return false;
            curu=curu->next;
            temp=temp->next;
        }


    return true;

    }
};