// Last updated: 9/7/2025, 4:15:20 PM
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
    ListNode* swap_list(ListNode* head){
        if(!head || !head->next ) return head;

        ListNode *first_node = head;
        ListNode *second_node = head->next;

        ListNode *temp = head->next->next;

        second_node->next = first_node;
        first_node->next = swap_list(temp);
        return second_node;
    }
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        return swap_list(head);
    }
};