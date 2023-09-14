#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL){
            return head;
        }
        Node* h = head;
        while (h != NULL){
            Node* temp = h->next;
            h->next = new Node(h->val);
            h->next->next = temp;
            h = temp;
        }
        h = head;
        while (h!=NULL){
            if (h->random != NULL){
                h->next->random = h->random->next;
            }
            h = h->next->next;
        }
        h = head;
        Node* newHead = h->next;
        Node* nH = newHead;
        while (nH->next != NULL){
            h->next = h->next->next;
            h = h->next;
            nH->next = nH->next->next;
            nH = nH->next;
        }
        h->next = h->next->next;
        return newHead;
    }
};













