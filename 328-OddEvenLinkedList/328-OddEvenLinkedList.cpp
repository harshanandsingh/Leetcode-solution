// Last updated: 9/6/2025, 11:55:44 PM
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
    ListNode* oddEvenList(ListNode* head) {
        if(!head) return head;

        ListNode *odd = nullptr, *even=nullptr;
        ListNode *odd_tail = nullptr , *even_tail = nullptr;
        int i = 1;
        
        while(head){
            if(i %2 == 0){
                if(!even){
                    even = head;
                    even_tail = head;
                    head = head->next;
                    even_tail->next = nullptr;
                    i++;
                    continue;
                }
                even_tail->next = head;
                even_tail = head;
                head = head->next;
                even_tail->next = nullptr;
                i++;
            }else{
                if(!odd){
                    odd=head;
                    odd_tail=head;
                    head = head->next;
                    odd_tail->next=nullptr;
                    i++;
                    continue;
                }
                odd_tail ->next = head;
                odd_tail = head;
                head = head->next;
                odd_tail->next = nullptr;
                i++;
            }
        }
        odd_tail->next = even ;
        return odd;
        
    }
};