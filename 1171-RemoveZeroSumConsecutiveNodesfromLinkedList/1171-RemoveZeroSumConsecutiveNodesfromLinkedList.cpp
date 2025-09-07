// Last updated: 9/7/2025, 2:40:38 PM
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
    ListNode* removeZeroSumSublists(ListNode* head) {

        if(!head ) return head;
        // first create a dummy node and with value 0 
        unordered_map<int,ListNode*>m;
        int p_s = 0;
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;

        m[0]=dummy; // case when net sum = 0

        ListNode* temp = head;

        while(temp){
            p_s+= temp->val;
            if(m.find(p_s) != m.end()){
                int sum_delete = p_s;
                ListNode *del_from_map = m[p_s]->next;
                while(del_from_map != temp){
                    sum_delete += del_from_map->val;
                    m.erase(sum_delete);
                    del_from_map = del_from_map->next; 
                }
                m[p_s]->next = temp->next;
            }
            else m[p_s]=temp;
            temp = temp->next;
        }
        return dummy->next; 
    }
};