#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL || head->next == NULL){
            return NULL;
        }
        ListNode *fast=head;
        ListNode *slow=head;
        ListNode *checker=head;
        bool found = false;
        while(fast->next && fast->next->next){
            fast = fast->next->next;
            slow=slow->next;
            if(fast==slow){
                found=true;
                break;
            }
        }
        if(!found){
            return NULL;
        }
        while(slow!=checker){
            slow=slow->next;
            checker=checker->next;
        }
        return slow;
    }
};