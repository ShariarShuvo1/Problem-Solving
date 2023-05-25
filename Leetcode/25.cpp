#include<iostream>
#include<vector>
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr){
            return nullptr;
        }
        else if(head->next == nullptr){
            return head;
        }
        vector<int> Arr;
        ListNode* h = head;
        while(h!=nullptr){
            Arr.push_back(h->val);
            h=h->next;
        }
        int toRun = Arr.size()/k;
        int a = 0;
        for(int x = 0; x<toRun; x++){
            for(int l =0, i =a, j = (a+k-1);l<(k)/2;l++,i++,j--){
                int temp = Arr[j];
                Arr[j] = Arr[i];
                Arr[i] = temp;
            }
            a+=k;
        }
        ListNode* hd = new ListNode(Arr[0],nullptr);
        ListNode* tail = hd;
        for(int i=1; i<Arr.size();i++){
            tail->next = new ListNode(Arr[i],nullptr);
            tail = tail->next;
        }
        return hd;
    }
};