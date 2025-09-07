// Last updated: 9/7/2025, 3:57:44 PM
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
    int length_of_linked_list(ListNode *head){
        if(!head) return 0;

        int i=0;
        while(head){
            i++;
            head = head->next;
        }
        return i;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        // find the length of linked list 
        int l = length_of_linked_list(head);

        if(k>l) return head; // we cant swap the value 

        int a = k , b =  l - k +1; // two point whose value we have to swap 
        if(a==b) return head;

        int i=1;
        ListNode* temp = head;
        ListNode *first_node , *second_node;
        while(temp){
            if(i==b){
                first_node = temp;
                //cout<<i<<endl;
            }
            if(i==a){
                //cout<<i<<endl;
                second_node = temp;
            }
            temp = temp -> next;
            i++;
        }

        first_node->val ^= second_node->val;
        second_node->val ^= first_node->val;
        first_node->val ^= second_node->val;
        return head;
    }
};