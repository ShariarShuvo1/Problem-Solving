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
        int l = 0;
        while(head!=nullptr){
            l++;
            head = head->next;
        }
        return l;
    }
    ListNode* insertionSortList(ListNode* head) {
        int n = len(head);
    }
};