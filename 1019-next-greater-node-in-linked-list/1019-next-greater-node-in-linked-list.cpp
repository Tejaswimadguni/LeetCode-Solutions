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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=head;
        ListNode* dummy=nullptr;
        vector<int>ans;
        while(temp){
            dummy=temp;
            bool valid=false;
            while(dummy){
                if(dummy->val>temp->val){
                    ans.push_back(dummy->val);
                    valid=true;
                    break;
                }
                dummy=dummy->next;
            }
            if(!valid)ans.push_back(0);
            temp=temp->next;
        }
        return ans;
    }
};