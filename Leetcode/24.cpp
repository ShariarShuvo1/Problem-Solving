#include<iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head ==nullptr){
            return head;
        }
        else if(head->next ==nullptr){
            return head;
        }
        else{
            ListNode* h = head;
            while(h!=nullptr){
                if(h->next==nullptr){
                    break;
                }
                if(head == h){
                    ListNode* last = h->next;
                    h->next = h->next->next;
                    last->next = h;
                    head = last;
                }
                else{
                    if(h->next->next == nullptr){
                        break;
                    }
                    ListNode* last = h->next;
                    h->next = h->next->next;
                    last->next = h->next->next;
                    h->next->next = last;
                    if(h->next->next->next == nullptr){
                        break;
                    }
                    else{
                        h = h->next->next;
                    }
                }
            }
            return head;
        }
        return nullptr;
    }
};