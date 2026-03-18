// Last updated: 3/18/2026, 11:41:15 PM
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
14        if(!head) return head;
15
16        ListNode *curr = head,*pre = nullptr;
17        while(curr){
18            ListNode* next = curr->next;
19            curr->next = pre;
20            pre = curr;
21            curr = next;
22        }
23        return pre;
24    }
25    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
26        if(!l1) return l2;
27        if(!l2) return l1;
28        // cout<<l1->val<<endl;
29        //l1 = rev(l1);
30        //l2 = rev(l2);
31        // cout<<l1->val<<endl;
32        ListNode *res = new ListNode(0);
33        ListNode *temp = res;
34        int carry = 0;
35        while(l1 || l2 || carry){
36
37            int sum = carry;
38            
39            if(l1){
40                sum+=l1->val;
41                l1 = l1->next;
42            }
43            if(l2){
44                sum+=l2->val;
45                l2 = l2->next;
46            }
47            cout<<sum<<endl;
48            carry = sum / 10;
49            temp->next = new ListNode(sum%10);
50            temp = temp->next;
51        }
52        return res->next;
53    }
54};