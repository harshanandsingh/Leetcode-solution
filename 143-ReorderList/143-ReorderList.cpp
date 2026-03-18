// Last updated: 3/18/2026, 4:22:01 PM
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
13    void reorderList(ListNode* head) {
14
15        // first devide the list into two part 
16        ListNode* slow = head;
17        ListNode* fast = head;
18
19        while(fast->next && fast->next->next){
20            fast = fast->next->next;
21            slow = slow->next;
22        }
23
24        // now reverse the second linked list 
25        ListNode* head2 = slow->next;
26        slow->next = nullptr;
27
28        ListNode* curr = head2;
29        ListNode* prev = nullptr;
30        while(curr){
31            ListNode* next = curr->next;
32            curr->next = prev;
33            prev = curr;
34            curr = next;
35        }
36        head2 = prev;
37
38        // now we have to do the task which is given to us 
39        // ListNode* temp = head , *temp1 = head;
40        // while(temp1){
41        //     temp = temp1->next;
42        //     temp1->next = head2;
43        //     head2 = head2->next;
44        //     temp1->next->next=temp;
45        //     temp1=temp;  
46        // }
47        // 3. Merge the two halves
48        ListNode* first = head;
49        ListNode* second = prev; // This was your head2 (the reversed second half)
50
51        while (second != nullptr) {
52            // Save the next nodes
53            ListNode* tmp1 = first->next;
54            ListNode* tmp2 = second->next;
55
56            // Re-wire the pointers
57            first->next = second;
58            second->next = tmp1;
59
60            // Advance the pointers
61            first = tmp1;
62            second = tmp2;
63        }
64    }
65};