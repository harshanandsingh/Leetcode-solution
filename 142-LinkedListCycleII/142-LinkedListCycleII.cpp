// Last updated: 9/5/2025, 7:56:32 AM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(!head) return nullptr;

        ListNode *slow = head;
        ListNode *fast = head;

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }

        // if no cycle
        if(!fast || !fast->next) return nullptr;

        slow = head;
        while(slow != fast){
            slow= slow->next;
            fast = fast->next;
        }
        return slow;
    }
};