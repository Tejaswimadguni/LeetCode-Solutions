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
    void reorderList(ListNode* head) {
        vector<int>nums;
        vector<int>ans;
        ListNode*temp=head;
        while(temp){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        int i=0,j=nums.size()-1,k=0;
        while(i<j){
            ans.push_back(nums[i]);
            i++;
            ans.push_back(nums[j]);
            j--;
        }
        if(i == j)
            ans.push_back(nums[i]);
        temp=head;
        while(temp && k<ans.size()){
           temp->val=ans[k];
            temp=temp->next;
            k++;
        }

    }
};