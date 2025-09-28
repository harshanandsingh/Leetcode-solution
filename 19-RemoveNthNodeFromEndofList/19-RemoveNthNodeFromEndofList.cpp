// Last updated: 9/28/2025, 2:20:31 PM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(!head) return nullptr;

        int l = 0;
        ListNode* temp = head;
        while(temp){
            l++;
            temp = temp->next;
        }

        if(n>l || n==0) return head; // no such node exist 
        

        int m = l-n;
        if(m==0){
            return head->next; // special case only one node and delete that node 
        }
        int i=0;
        temp = head;
        while(temp->next){
            i++;
            if(i==m){
                ListNode* d = temp->next;
                temp->next = temp->next->next;
                delete d;
                return head;
            }
            temp = temp->next;
        }

        return head;

    }
};