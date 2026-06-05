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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL)return NULL;

        int n=0;
        ListNode* temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
    ListNode*prev=nullptr;
    temp=head;
        int mid=n/2;
        while(mid>0){
            prev=temp;
            temp=temp->next;
            mid--;
        }
        prev->next=temp->next;
        delete temp;

        return head;

    }
};