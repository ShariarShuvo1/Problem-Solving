#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* h = head;
        int lenth = 0 ;
        while(h!=nullptr){
            lenth++;
            h=h->next;
        }
        if(lenth<2){
            return head;
        }
        k = k%lenth;
        for(int i = 0; i <k;i++){
            ListNode* h = head;
            ListNode* last;
            while(h!=nullptr){
                if (h->next->next==nullptr){
                    last = h->next;
                    h->next=nullptr;
                    break;
                }
                h=h->next;
            }
            last->next = head;
            head = last;
        }
        return head;
    }
};