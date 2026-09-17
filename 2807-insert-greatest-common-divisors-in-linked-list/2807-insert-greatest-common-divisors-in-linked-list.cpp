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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*curr=head;
        ListNode*ans=new ListNode (0);
        ListNode*prev=ans;

        while(curr && curr->next){
            prev->next=new ListNode(curr->val);
            prev=prev->next;
            int num=gcd(curr->val,curr->next->val);
            prev->next=new ListNode(num);
            prev=prev->next;
            curr=curr->next;
        }
        prev->next=new ListNode(curr->val);
        return ans->next;
    }
};