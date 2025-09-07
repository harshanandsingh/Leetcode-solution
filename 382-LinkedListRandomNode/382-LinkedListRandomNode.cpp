// Last updated: 9/7/2025, 10:06:34 AM
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
    ListNode *head;
    Solution(ListNode* head) {
        this -> head = head;
    }
    
    int getRandom() {
        
        ListNode* temp = head;
        int count = 0;
        int result;
        
        while(temp){
            count++;
            if(rand() % count < 1) result = temp->val;
            temp = temp->next;
        }
        return result;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */