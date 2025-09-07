// Last updated: 9/7/2025, 5:44:29 PM
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
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode *res = new ListNode(0);
        ListNode *temp = res;
        int carry = 0;
        while(l1 || l2 || carry){

            int sum = carry;
            if(l1){
                sum+=l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            temp->next = new ListNode(sum%10);
            temp = temp->next;
            // int sum = l1->val + l2->val + carry;
            // int val = sum %10;
            // carry = sum/10;
            // temp->next = new ListNode(val);
            // temp = temp->next;
            // l1 = l1->next;
            // l2 = l2->next;
        }
        return res->next;
    }
};