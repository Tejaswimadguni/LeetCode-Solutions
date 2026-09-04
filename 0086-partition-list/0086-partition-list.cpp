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
    ListNode* partition(ListNode* head, int x) {
        ListNode*temp=head;
       

        ListNode* lowHead = new ListNode(0);
        ListNode* highHead = new ListNode(0);

        ListNode* low = lowHead;
        ListNode* high = highHead;
        

        while(temp){
            ListNode* nxt=temp->next;
            if(temp->val<x){
                low->next=temp;

                low=low->next;
                
            }else{
                high->next=temp;
                high=high->next;
            }
            temp=nxt;
        }

        low->next=highHead->next;
        high->next=NULL;

        return lowHead->next;
    }
};