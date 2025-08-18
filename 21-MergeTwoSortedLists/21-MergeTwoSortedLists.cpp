// Last updated: 8/18/2025, 5:27:16 PM
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // lets first create a temp node -> which will act as the head for not 
        ListNode* head = new ListNode();
        
        // now we have to think in this way -> which node value is sorter we will add that node in the end 
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        ListNode* temp3 = head;

        while(temp1 && temp2){
            if(temp1->val < temp2->val){
                temp3->next = temp1;
                temp1 = temp1->next;
                temp3= temp3->next;
            }else if(temp1->val > temp2->val){
                temp3->next = temp2;
                temp2 = temp2->next;
                temp3= temp3->next;
            }else{
                temp3->next = temp2;
                temp2 = temp2->next;
                temp3= temp3->next;
                temp3->next = temp1;
                temp1 = temp1->next;
                temp3= temp3->next;
            }
        }
        if(temp1){
            temp3->next=temp1;
        }else if(temp2){
            temp3->next=temp2;
        }
        return head->next;

    }
};