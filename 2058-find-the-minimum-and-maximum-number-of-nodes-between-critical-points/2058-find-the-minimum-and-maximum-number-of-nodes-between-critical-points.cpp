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
        int first = -1;
        int last = -1;
        int minDist = INT_MAX;
        while(temp &&  temp->next){
            if((temp->val<temp->next->val && temp->val<prev->val) ||(temp->val>temp->next->val && temp->val>prev->val) ){
                if(first==-1){
                    first=i;
                }else{
                    minDist=min(minDist,i-last);
                }

                last=i;
            }
            i++;
            prev=prev->next;
            temp=temp->next;

        }

            if(first==last)return {-1,-1};

            int maxx=last-first;
            return {minDist,maxx};
        
    }
};