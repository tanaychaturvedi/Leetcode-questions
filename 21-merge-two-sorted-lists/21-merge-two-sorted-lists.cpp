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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if(!l1)return l2;
        if(!l2)return l1;
            ListNode *head;
        if(l1->val<=l2->val) {
            head=l1;
            head->next=mergeTwoLists(l1->next,l2);
        }
        else {
            head=l2;
            head->next=mergeTwoLists(l1,l2->next);
        }
        return head;
    }
};