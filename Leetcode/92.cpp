#include <iostream>
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

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right){
            return head;
        }
        ListNode* left_node = head;
        ListNode* first_node_end = nullptr;
        ListNode* right_node;
        ListNode* end_part;
        ListNode* h = head;
        int count = 1;
        while (count<=right){
            if (count == left){
                left_node = h;
            }
            if (count == right){
                right_node = h;
                end_part = h->next;
                right_node->next = nullptr;
            }
            h = h->next;
            count++;
        }
        h = head;
        while (h != nullptr){
            if (h->next == left_node){
                first_node_end = h;
                break;
            }
            h=h->next;
        }

        ListNode* reversed = left_node;
        while (left_node->next!= nullptr){
            // separate right most node first
            ListNode* imidiate_node = left_node->next;
            left_node->next = imidiate_node->next;
            imidiate_node->next = reversed;
            reversed = imidiate_node;
        }

        h = reversed;
        while (h->next!= nullptr){
            h = h->next;
        }
        h->next = end_part;

        if (left == 1){
            return reversed;
        }
        first_node_end->next = reversed;

        return head;
    }
};











