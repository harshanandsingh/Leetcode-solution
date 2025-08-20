// Last updated: 8/21/2025, 12:34:05 AM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* head) {
        // i dont know but what i think we have to remove this node head 
        head->val = head->next->val;
        head->next = head->next->next;
    }
};


//if(head == nullptr) return head;
        
// if(x==1){
//     ListNode* temp = head;
//     head = head->next;
//     delete temp;
//     //return head;
// }

// int i=1;
// Node* temp = head;
// Node* prev = nullptr;
// while(temp !=  nullptr && i< x){
//     prev = temp;
//     temp = temp->next;
//     ++i;
// }

// if(temp == nullptr) return head;

// prev-> next = temp->next;
// delete temp;

// return head;