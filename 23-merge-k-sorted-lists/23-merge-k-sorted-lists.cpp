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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for(auto i:lists) {
            ListNode *r=i;
            while(r)
            {
                v.push_back(r->val);
                r=r->next;
            }
            
        }
       
        
        
        sort(v.begin(),v.end());
        ListNode *t=new ListNode();
        ListNode *ans=t;
        for(auto i:v) {
            ListNode *temp=new ListNode(i);
            t->next=temp;
            t=t->next;
        
        }
        return ans->next; 
        }
};