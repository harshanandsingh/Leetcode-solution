// Last updated: 8/18/2025, 6:02:37 PM
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
        // one way is to reverest the link list and check both list value are same or not 
        // you only have to reverse second half -> as you reveres this the original linklist also get reversed 
        if(!head && !head->next) return true;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        // now slow points to the mid of linked list 
        if(fast) slow=slow->next;

        // now reverse form solw 

        ListNode* pre = nullptr;
        ListNode* cur = slow;
        while(cur){
            ListNode* next = cur->next;
            cur->next = pre;
            pre=cur;
            cur=next;
        }
        ListNode* head2=pre;

        while(head2 && head->val == head2->val){
            head = head->next;
            head2 = head2->next;
        }
        if(!head2) return true;
        return false;

        
    }
};