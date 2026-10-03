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
    bool isPalindrome(ListNode* head) {
        string f,b;
        stack<int>st;

        ListNode* temp=head;
        while(temp){
            st.push(temp->val);
            f+=temp->val-'0';
            temp=temp->next;
        }


        if(st.empty())return true;
        while(!st.empty()){
            b+=st.top()-'0';
            st.pop();
        }

        return f==b;
    }
};