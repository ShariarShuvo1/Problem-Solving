#include<vector>
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.size() == 0){
            return nullptr;
        }
        else if(lists.size() ==1){
            return lists[0];
        }
        else{
            vector<int> arr;
            for(int x= 0; x<lists.size();x++){
                ListNode* h = lists[x];
                if(h!=nullptr){
                    while(h!=nullptr){
                        arr.push_back(h->val);
                        h= h->next;
                    }
                }
            }
            if(arr.size() ==0){
                return nullptr;
            }
            else{
                sort(arr.begin(), arr.end());
                ListNode* head = new ListNode(arr[0],nullptr);
                ListNode* tail = head;
                for(int i = 1;i<arr.size();i++){
                    tail->next = new ListNode(arr[i],nullptr);
                    tail = tail->next;
                }
                return head;
            }
        }
        return nullptr;
    }
};