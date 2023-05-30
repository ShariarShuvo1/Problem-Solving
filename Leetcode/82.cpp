#include<iostream>
#include<vector>
#include<string>
#include<map>
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
void myMapPrint(map<int, int> myMap){
        for(auto x: myMap){
            cout<<x.first<<" : "<<x.second<<endl;;
        }
    }
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> myMap;
        ListNode*h =head;
        while (h!=nullptr){
            myMap[h->val]+=1;
            h=h->next;
        }
        ListNode *newHead = nullptr;
        ListNode* tail;
        for(auto i:myMap){
            if(i.second==1){
                if(newHead==nullptr){
                    newHead = new ListNode(i.first);
                    tail=newHead;
                }
                else{
                    tail->next = new ListNode(i.first);
                    tail=tail->next;
                }
            }
        }
        return newHead;
    }
};

