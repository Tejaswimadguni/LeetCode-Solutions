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
    ListNode* rev(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* add(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* ans = new ListNode(-1);
        ListNode* hd = ans;
        ListNode* t1 = l1;
        ListNode* t2 = l2;

        while (t1 && t2) {
            int sum = t1->val + t2->val + carry;
            int dig = sum % 10;
            ListNode* nxt = new ListNode(dig);
            ans->next = nxt;
            carry = sum / 10;
            t1 = t1->next;
            t2 = t2->next;
            ans = ans->next;
        }

        
        
            while (t2) {
                int sum = t2->val + carry;
                int dig = sum % 10;
                ListNode* nxt = new ListNode(dig);
                ans->next = nxt;
                carry = sum / 10;
                t2 = t2->next;
                ans = ans->next;
            }    
            
        
            while (t1) {
                int sum = t1->val + carry;
                int dig = sum % 10;
                ListNode* nxt = new ListNode(dig);
                ans->next = nxt;
                carry = sum / 10;
                t1 = t1->next;
                ans = ans->next;
            }
        
        if (carry) {
            ans->next = new ListNode(carry);
        }

        return hd->next;
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return add(l1,l2);
    }
};