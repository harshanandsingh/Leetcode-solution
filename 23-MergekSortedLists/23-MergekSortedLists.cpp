// Last updated: 9/7/2025, 12:40:55 PM
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n==0) return nullptr;
        ListNode* head = lists[0];
        int i=1;
        while(i<n){
            ListNode* temp1=lists[i];
            ListNode* temp = head;

            ListNode* temp_head = nullptr;
            ListNode* temp_tail = nullptr;
            while(temp && temp1){
                if(temp->val < temp1->val){
                    if(!temp_head){
                        temp_head = temp;
                        // temp_tail = temp;
                        // temp = temp->next;
                        // temp_teil->next = nullptr;
                    }else{
                        temp_tail -> next = temp;
                    }
                    temp_tail = temp;
                    temp = temp->next;
                    temp_tail->next = nullptr;
                }
                else{
                    if(!temp_head){
                        temp_head = temp1;
                        // temp_tail = temp;
                        // temp = temp->next;
                        // temp_teil->next = nullptr;
                    }else{
                        temp_tail -> next = temp1;
                    }
                    temp_tail = temp1;
                    temp1 = temp1->next;
                    temp_tail->next = nullptr;
                }
            }
            if(temp){
                if(temp_tail) temp_tail ->next = temp;
                else temp_head = temp;
            }
            if(temp1){
                if(temp_tail) temp_tail ->next = temp1;
                else temp_head = temp1;
            }

            head = temp_head;
            i++;
        }
        return head;
    }
};