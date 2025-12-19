// Last updated: 12/19/2025, 11:34:25 AM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    // ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
12        
13    // }
14    int size(ListNode* root){
15        if(!root) return 0;
16
17        int i = 0;
18        while(root){
19            root = root->next;
20            i++;
21        }
22        return i;
23    }
24    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
25        // first step -> 
26        // remove th3e extra size 
27
28        // so first find out the size 
29        int a = size(headA);
30        int b = size(headB);
31
32        // remove the extra size which we dont need 
33        while(a>b){
34            headA = headA->next;
35            a--;
36        }
37
38        while(b>a){
39            headB = headB->next;
40            b--;
41        }
42
43        if(!headA || !headB) return nullptr;
44
45        // now start compaing the size of both 
46        while(headA && headB && headA != headB){
47            headA = headA->next;
48            headB = headB->next;
49        }
50        return headA ;
51    }
52};