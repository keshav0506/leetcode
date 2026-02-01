// Last updated: 01/02/2026, 22:51:21
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
bool isCyclic(ListNode* &slow,ListNode* &fast){
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        if(isCyclic(slow,fast)){
            slow = head;
            while(slow!=fast){
            slow = slow->next;
            fast =fast->next;
            }
            return slow;
        }
            return NULL;
    }
};