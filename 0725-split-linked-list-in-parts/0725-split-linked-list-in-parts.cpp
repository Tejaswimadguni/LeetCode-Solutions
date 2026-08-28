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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        ListNode*temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        int extrs=n%k;
        int num=n/k;
        for(int i=0;i<k;i++){
            ans.push_back(head);

            int sz=num+(extrs>0);
            extrs--;

            for(int j=1;j<sz;j++){
                head=head->next;
            }

            if(head){
                ListNode *temp=head->next;
                head->next=nullptr;
                head=temp;
            }
        }
        
        return ans;

    }
};