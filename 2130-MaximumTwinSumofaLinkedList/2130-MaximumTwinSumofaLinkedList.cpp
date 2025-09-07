// Last updated: 9/7/2025, 4:46:46 PM
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
    int pairSum(ListNode* head) {
        // first method reverse the linked list after the midle of the linked list 
        // too much of time and 3 time traversal of the linked list 
        ListNode *slow = head , *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        // slow middle of the linked list 
       //cout<<slow->val<<endl;

        // reverse the list 
        ListNode *pre = nullptr;
        ListNode *curr = slow;
        while(curr){
            ListNode* next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        slow = pre;

        // now add the pair 
        int max_val = INT_MIN;
        while(slow && head){
            //cout<<slow->val <<" "<<head->val <<endl;
            int sum = slow->val + head->val;
            max_val = max(max_val , sum );
            slow = slow->next;
            head = head->next;
        }
        return max_val;
    }
};