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
    ListNode* reverseBetween(ListNode* head, int left, int right) { 
        int n = left - 1;
        ListNode* temp = head;
        ListNode* prevLeft = nullptr;

        while(n--){
         prevLeft = temp;
        temp = temp->next;
        }
        ListNode* leftNode = temp;
           int el=right-left+1;   
        ListNode*prev=nullptr;
        ListNode* curr=temp;
        while(curr && el){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            el--;
        }
        leftNode->next = curr;
        if(prevLeft)
        prevLeft->next = prev;
        else
        head = prev;

        return head;
    }
};