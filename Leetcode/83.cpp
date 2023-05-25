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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* h=head;
        if (h!=nullptr){
            while (h->next!=nullptr){
                if (h->val==h->next->val){
                    while(true){
                        h->next = h->next->next;
                        if(h==nullptr || h->next==nullptr){
                            break;
                        }
                        else if(h->next->val != h->val){
                            break;
                        }
                    }
                }
                h = h->next;
                if (h==nullptr){
                    break;
                }
            }
        }
        return head;
    }
};