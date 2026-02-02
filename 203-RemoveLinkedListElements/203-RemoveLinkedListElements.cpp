// Last updated: 02/02/2026, 20:55:59
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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL && head->val==val){
            ListNode* temp = head;
            head= head->next;
            delete temp;
        }
        if(head==NULL){
            return NULL;
        }
        ListNode* curr = head;
        ListNode* temp = NULL;
        while(curr->next!=NULL){
            temp=curr->next;
            if(temp->val==val){
                curr->next=temp->next;
                temp->next=NULL;
                delete temp;
            }
            else{
                curr=curr->next;
            }
        }
        
        return head;
    }
};