// Last updated: 8/18/2025, 5:36:38 PM
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
    bool hasCycle(ListNode *head) {
        // we can find the cycle in the link list by using slow and fast pointer 
        if(!head) return false;

        ListNode *slow = head;
        ListNode *fast = head;
        do{
            slow = slow->next;
            if(fast->next) fast = fast->next->next;
            else return false;
            if(slow==fast) return true;
        }while(fast);
        return false;
    }
};