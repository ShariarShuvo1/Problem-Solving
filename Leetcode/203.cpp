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
        int count=0;
        ListNode* h =head;
        if(head==nullptr){
            return head;
        }
        else if(head->next==nullptr){
            if (head->val == val){
                return head->next;
            }
            else{
                return head;
            }
        }
        while(head->next!=nullptr){
            if (head->val == val && count ==0){
                head = head->next;
                h =head;
            }
            else if (head->next->val ==val){
                head->next = head->next->next;
                count++;
            }
            else{
                head = head->next;
                count++;
            }
        }
        if(h->val == val){
            h=h->next;
        }
        return h;
    }
};