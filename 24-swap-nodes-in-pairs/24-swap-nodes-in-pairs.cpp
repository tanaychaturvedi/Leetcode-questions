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
    ListNode* swapPairs(ListNode* head) {
        ListNode *t=head;
        if(head==NULL or head->next==NULL)return head;
        while( t!=NULL and t->next!=NULL ) {
            int x=t->val;
            t->val=t->next->val;
            t->next->val=x;
            t=t->next->next;
        }
        return head;
        
    }
};