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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> nums;
        if(head==NULL)return NULL;
        ListNode *t=head;
        
        while(t) {
            nums.push_back(t->val);
            t=t->next;
        }
        int l=nums.size();
        k=k%l;
          reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(), nums.end());
        t=head;
        int i=0;
        while(t) {
            t->val=nums[i];
            i++;
            t=t->next;
        }
        return head;
    }
};