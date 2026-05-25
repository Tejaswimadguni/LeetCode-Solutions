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
private:  void rotate(ListNode*& head){
    if(!head || !head->next) return;
    ListNode* temp = head;
    while(temp->next->next){
        temp = temp->next;
    }
    ListNode* last = temp->next;
    temp->next = nullptr;
    last->next = head;
    head = last;
}

public:
    ListNode* rotateRight(ListNode* head, int k) {
        int len = 0;
        ListNode* temp = head;

        while(temp){
         len++;
            temp = temp->next;
        }
        if(len==0)return head;
        k%=len;
       while(k>0){
        rotate(head);
        k--;
       }
        return head;
    }
};