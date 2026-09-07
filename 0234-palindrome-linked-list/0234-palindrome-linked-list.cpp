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
        stack<int>st;
        ListNode* temp=head;
        int n=0;
        while(temp){
            n++;
            temp=temp->next;
        }
        n=n/2;

        temp=head;
        if(n==0)return head;
        while(n--){
            st.push(temp->val);
            temp=temp->next;
        }

        while(temp){
            if(st.top()==temp->val){
                st.pop();
            }

            temp=temp->next;
        }

        return st.empty();
    }
};