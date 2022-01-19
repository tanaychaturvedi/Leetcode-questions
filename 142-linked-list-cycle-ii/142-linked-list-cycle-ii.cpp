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
    ListNode *detectCycle(ListNode *head) {
        
        map<ListNode *,int> m;
        if(head==NULL or head->next ==NULL)
            return NULL;
        
        
        while(head->next && head->next->next)
        {
            m[head]++;
            head=head->next;
            if(m[head]==2)
                return head;
            
        }
        
      return NULL;
        
    }
};