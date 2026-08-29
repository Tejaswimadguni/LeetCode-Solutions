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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1;
        stack<int>s2;
        ListNode* temp1=l1;
        ListNode* temp2=l2;

        while(temp1){
            s1.push(temp1->val);
            temp1=temp1->next;
        }
        while(temp2){
            s2.push(temp2->val);
            temp2=temp2->next;
        }
        vector<int>ans;
        int carry=0;
        while (!s1.empty() || !s2.empty() || carry != 0){
            int n1=0;
            int n2=0;
            if(!s1.empty()){
                 n1=s1.top();
                s1.pop();
            }
            
            if(!s2.empty()){
                 n2=s2.top();
                s2.pop();
            }
            int sum=n1+n2+carry;
            
            if(sum>=10){
                carry=sum/10;
                sum=sum%10;
            }else if(sum<10)carry=0;
            ans.push_back(sum);
        }

        reverse(ans.begin(),ans.end());
        ListNode* newNode=new ListNode(ans[0]);
        ListNode* curr=newNode;
        for(int i=1;i<ans.size();i++){
            curr->next=new ListNode(ans[i]);
            curr=curr->next;
        }
        return newNode;
    }
};