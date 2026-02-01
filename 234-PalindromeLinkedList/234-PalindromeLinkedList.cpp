// Last updated: 01/02/2026, 22:51:14
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
ListNode* reverse(ListNode* head){
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* next = NULL;
    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
    bool isPalindrome(ListNode* head){
        if(head == NULL){
            return true;
        }
        if(head->next == NULL){
            return true;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast= fast->next->next;
        }
        ListNode* newHead = reverse(slow->next);
        slow->next = newHead;
        ListNode* temp1 = head;
        ListNode* temp2 = newHead;
        while(temp2!=NULL){
            if(temp1->val!=temp2->val){
                return false;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        return true;


    }
};