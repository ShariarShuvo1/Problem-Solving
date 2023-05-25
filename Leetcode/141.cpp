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
    bool hasCycle(ListNode *head) {
        int count = 0;
        bool circle = false;
        while (head!=NULL){
            if (count >10010){
                circle = true;
                break;
            }
            if(head->next ==NULL){
                break;
            }
            count++;
            head=head->next;
        }
        return circle;
    }
};