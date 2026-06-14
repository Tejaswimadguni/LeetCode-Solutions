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
    int pairSum(ListNode* head) {
        ListNode*temp=head;
        vector<int>ans;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        int maxs=0;
        int n=ans.size();
        for(int i=0;i<(n / 2);i++){
            int sum=ans[i]+ans[n-1-i];
            maxs=max(maxs,sum);
        }

        return maxs;
    }
};