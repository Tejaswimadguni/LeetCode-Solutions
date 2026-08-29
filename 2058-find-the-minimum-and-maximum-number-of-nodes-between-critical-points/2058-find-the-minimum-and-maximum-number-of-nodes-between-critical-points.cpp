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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head)return{-1,-1};
        if(!head->next)return{-1,-1};
        ListNode* temp=head->next;
        ListNode* prev=head;

        vector<int>nums;
        int i=2;
        while(temp &&  temp->next){
            if((temp->val<temp->next->val && temp->val<prev->val) ||(temp->val>temp->next->val && temp->val>prev->val) ){
                nums.push_back(i);
                prev=prev->next;
                temp=temp->next;
                i++;
                continue;
            }
            i++;
            prev=prev->next;
            temp=temp->next;

        }

        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<2)return{-1,-1};
        int maxx=nums[n-1]-nums[0];
        int minn = INT_MAX;

        for(int j = 1; j < n; j++) {
             minn = min(minn, nums[j] - nums[j-1]);
        }       

        return{minn,maxx};
    }
};