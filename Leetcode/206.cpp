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
    ListNode* reverseList(ListNode* head) {
        ListNode* h = new ListNode();
        if(head==nullptr){
            return head;
        }
        else if(head->next ==nullptr){
            return head;
        }
        else{
            h->val = head->val;
            h->next = nullptr;
            head = head->next;
            while(head!=nullptr){
                ListNode* n= new ListNode();
                n->val = head->val;
                n->next = h;
                h = n;
                head = head->next;
            }
            return h;
        }
    }
};