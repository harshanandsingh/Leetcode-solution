// Last updated: 12/19/2025, 11:25:31 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* removeElements(ListNode* head, int val) {
14        ListNode *new_h = new ListNode();
15        ListNode* temp = head;
16        ListNode* t = new_h; 
17        while(temp){
18            if(temp->val != val){
19                t->next = temp;
20                t=t->next;
21            }
22            temp=temp->next;
23        }
24        t->next=nullptr;
25        return new_h->next;
26    }
27};