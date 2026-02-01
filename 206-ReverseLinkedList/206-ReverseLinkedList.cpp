// Last updated: 01/02/2026, 22:51:19
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
ListNode* reverse(ListNode* &prev,ListNode* &curr){
    if(curr==NULL){
        return prev;
    }
    ListNode* next = curr->next;
    curr->next = prev;
    return reverse(curr,next);
}
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        return reverse(prev,curr); 
    }
};