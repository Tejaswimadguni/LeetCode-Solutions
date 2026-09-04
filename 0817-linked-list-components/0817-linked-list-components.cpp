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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int>map(nums.begin(),nums.end());
        ListNode* temp=head->next;
        ListNode* prev=head;
        int ans=0;
        if (map.count(head->val)) {
                 ans++;
             }
        while(temp){
            

            if(map.count(temp->val) && !map.count(prev->val)){
                ans++;
            }

            prev=temp;
            temp=temp->next;
        }
        
        return ans;
    }
};