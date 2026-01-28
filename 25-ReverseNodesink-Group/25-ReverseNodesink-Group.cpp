// Last updated: 1/28/2026, 11:35:19 AM
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
13    ListNode* rev(ListNode* head){
14        ListNode* pre = nullptr;
15        ListNode* curr = head;
16        while(curr){
17            ListNode* next = curr->next;
18            curr->next = pre;
19            pre = curr;
20            curr = next;
21        }
22        return pre;
23    }
24    ListNode* reverseKGroup(ListNode* head, int k) {
25        if(!head) return head;
26
27        ListNode* dummy = new ListNode();
28        ListNode* prev_root = dummy;
29        dummy->next = head;
30
31        ListNode* temp = head;
32        ListNode* curr = temp;
33        ListNode* next_root = nullptr;
34
35        while(curr){
36            int i=1;
37            while(i<k && curr){
38                curr= curr->next;
39                i++;
40            }
41            if(i<k || !curr){
42                break;
43            }
44
45            next_root = curr->next;
46            curr->next = nullptr;
47            ListNode* new_head = rev(temp);
48            prev_root->next = new_head;
49            prev_root = temp;
50            temp = next_root;
51            curr = next_root;
52        }
53        if(temp && !curr) prev_root->next = temp;
54        return dummy->next;
55    }
56};