// Last updated: 12/19/2025, 11:31:22 AM
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
13    ListNode* deleteDuplicates(ListNode* head) {
14        if(!head) return head;
15        ListNode* i = head;
16        ListNode* j= head;
17
18        while(j){
19            int a = i->val;
20            while(j && j->val == a){
21                j=j->next;
22            }
23            i->next=j;
24            i=j;
25            if(j) j=j->next;
26        }
27        return head;
28
29        // while(j != nullptr){
30        //     if(j->val != i-> val){
31        //         i-> next = j;
32        //         i=j;
33        //     }
34        //     else j = j->next;
35        // }
36        // i->next = j;
37        // return head;
38    }
39};