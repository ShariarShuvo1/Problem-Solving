#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
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
    int len(ListNode* head){
        ListNode* h = head;
        int count = 0;
        while(h!=nullptr){
            count++;
            h=h->next;
        }
        return count;
    }
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
    void reorderList(ListNode* head) {
        int lenth = len(head);
        int mid = (lenth/2);
        int count = 0;
        ListNode* h = head;
        ListNode* temp = nullptr;
        while (h!=nullptr){
            if(count==mid){
                temp = h->next;
                h->next=nullptr;
                break;
            }
            count++;
            h=h->next;
        }
        temp = reverseList(temp);
        ListNode* h1=head;
        ListNode* h2=temp;
        while(h2!=nullptr){
            ListNode* t1 = h1->next;
            ListNode* t2 = h2->next;
            h2->next = t1;
            h1->next = h2;
            h2 =t2;
            h1 = t1;
        }
        
    }
};