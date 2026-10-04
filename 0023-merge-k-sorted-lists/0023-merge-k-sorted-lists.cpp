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
private:
ListNode* solve(ListNode* list1, ListNode* list2){

    ListNode* curr1=list1;
    ListNode* curr2=list2;
    ListNode* next1=curr1->next;
    ListNode* next2=curr2->next;
    
    while(curr2 ){
        if(next1 && curr2->val>=curr1->val && curr2->val<next1->val){
            curr1->next=curr2;
            curr2->next=next1;
            
            curr1=curr2;
            curr2=next2;
             next2 = curr2 ? curr2->next : NULL;
        }else{
            
            if(next1==NULL){
                curr1->next=curr2;

                return list1;
            }
            curr1=next1;
            next1=next1->next;

        }
    }

    return list1;

}
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)return list2;
        if(list2==NULL)return list1;

        if(list1->val<=list2->val){
            return solve(list1,list2);
        }else{
           return solve(list2,list1);
        }
        return NULL;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0)return NULL;
        if(n==1)return lists[0];
        ListNode *origin=mergeTwoLists(lists[0],lists[1]);
        for(int i=2;i<n;i++){
            origin=mergeTwoLists(origin,lists[i]);
        }

        return origin;
    }
};