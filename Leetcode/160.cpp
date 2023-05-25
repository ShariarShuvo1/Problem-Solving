#include<vector>
#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* node =NULL;
        ListNode* h1 = headA;
        bool found = false;
        while(h1!=nullptr){
            ListNode*h2 = headB;
            while(h2!=nullptr){
                if(h1==h2){
                    found = true;
                    node = h1;
                    break;
                }
                h2=h2->next;
            }
            if(found){
                break;
            }
            h1=h1->next;
        }
        return node;
    }
};