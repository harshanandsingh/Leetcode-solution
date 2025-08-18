// Last updated: 8/18/2025, 6:21:53 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode* i = head;
        ListNode* j= head->next;

        while(j){
            int a = i->val;
            while(j && j->val == a){
                j=j->next;
            }
            i->next=j;
            i=j;
            if(j) j=j->next;
        }
        return head;

        // while(j != nullptr){
        //     if(j->val != i-> val){
        //         i-> next = j;
        //         i=j;
        //     }
        //     else j = j->next;
        // }
        // i->next = j;
        // return head;
    }
};