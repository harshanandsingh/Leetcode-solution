// Last updated: 9/7/2025, 11:39:08 AM
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution {
public:
    TreeNode* bst(ListNode* head){
        if(!head) return nullptr;

        // find the middle element 
        ListNode *slow = head , *fast = head , *prev_slow = nullptr;
        while(fast && fast->next){
            prev_slow = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        // create the root and find its left and right child 
        TreeNode *root = new TreeNode(slow->val);
        if(prev_slow) prev_slow->next = nullptr; // remove the conection b/w mid and its left part 
        if(slow != head) root->left = bst(head);
        root->right = bst(slow->next);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        // find mid 
        // find left and right child 
        // return root 
        return bst(head);
    }
};