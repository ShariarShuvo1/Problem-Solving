class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* h = head;
        while(h!=nullptr){
            count+=1;
            h=h->next;
        }
        delete &h;
        int toStop = count - n;
        if(toStop ==0){
            head = head->next;
        }
        else{
            ListNode* h = head;
            toStop--;
            int c = 0;
            while(h->next!=nullptr){
                if(c==toStop){
                    break;
                }
                c+=1;
                h=h->next;
            }
            h->next = h->next->next;
        }
        return head;
    }
};