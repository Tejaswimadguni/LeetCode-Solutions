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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>ans;
        ListNode * temp=list1;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }

        temp=list2;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        if(ans.empty())return NULL;
        sort(ans.begin(),ans.end());
        ListNode* head = new ListNode(ans[0]);
        ListNode* temp1 = head;

        for(int i = 1; i < ans.size(); i++){

         temp1->next = new ListNode(ans[i]);

        temp1 = temp1->next;
        }
     return head;
    }
};