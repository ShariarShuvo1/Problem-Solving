#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int Val, Node *Next)
    {
        val = Val;
        next = Next;
    }
};
class Solution {
public:
    Node* linkListMaker(int n){
        Node* head = new Node(1,nullptr);
        Node* temp = head;
        for(int i = 2;i<=n;i++){
            temp->next = new Node(i,nullptr);
            temp = temp->next;
        }
        return head;
    }
    int findTheWinner(int n, int k) {
        Node* head = linkListMaker(n);
        int len = n;
        int currentIdx = 0;
        for(int i = 0; i<n-1;i++){
            int removeIdx = ((currentIdx+k-1)%len);
            currentIdx = removeIdx;
            if(removeIdx ==0){
                head = head->next;
            }
            else if(removeIdx == len-1){
                Node* h = head;
                while(h->next->next!=nullptr){
                    h=h->next;
                }
                h->next = nullptr;
            }
            else{
                Node* h = head;
                int count = 0;
                while(h!=nullptr){
                    count++;
                    if(count == removeIdx){
                        break;
                    }
                    h = h->next;
                }
                h->next = h->next->next;
            }
            len--;
        }
        return head->val;
    }
};