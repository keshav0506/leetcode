// Last updated: 01/02/2026, 22:51:40
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
int getLength(ListNode* &head){
    int len = 0;
    ListNode* temp = head;
    while(temp!= NULL){
        temp = temp->next;
        len++;
    }
    return len;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        int len = getLength(head);
        if(k>len){
            return head;
        }
        if(head == NULL){
            return NULL;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
        int count = 0;
        while(count < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
        if(next!=NULL){
            head->next = reverseKGroup(next,k);
        }
        return prev;
    }
};