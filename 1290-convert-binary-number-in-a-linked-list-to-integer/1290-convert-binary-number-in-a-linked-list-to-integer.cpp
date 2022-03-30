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
	int result = 0;
	int getDecimalValue(ListNode* head) {
		if(head == NULL){
			return result;
		}
		result = (result << 1) + head -> val;
		return getDecimalValue(head -> next);
	}
};