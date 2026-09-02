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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*  temp=list1;

        for(int i=0;i<a-1;i++){
            temp=temp->next;
        }

        ListNode* dummy=temp->next;

        for(int i=a;i<=b;i++){
            dummy=dummy->next;
        }

        temp->next=list2;

        ListNode* after=list2;

        while(after->next){
            after=after->next;
        }
        after->next=dummy;

        return list1;
    }
};