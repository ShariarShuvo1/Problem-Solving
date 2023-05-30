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


class MyLinkedList {
public:
    Node * head=nullptr;
    MyLinkedList() {
        
    }
    int len(){
        Node*h=head;
        int count = 0;
        while(h!=nullptr){
            count+=1;
            h=h->next;
        }
        return count;
    }
    
    int get(int index) {
        if(index<0 || index>= len()){
            return -1;
        }
        Node* h=head;
        int count = 0 ;
        while (h!=nullptr){
            if(count==index){
                return h->val;
            }
            count++;
            h=h->next;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        if(head==nullptr){
            head = new Node(val,nullptr);
        }
        else{
            Node* h=new Node(val,head);
            head = h;
        }
    }
    
    void addAtTail(int val) {
        if(head==nullptr){
            head = new Node(val,nullptr);
        }
        else{
            Node*h = head;
            while(h->next!=nullptr){
                h=h->next;
            }
            h->next = new Node(val,nullptr);
        }
    }
    
    void addAtIndex(int index, int val) {
        int lenth = len();
        if(index>=0 && index<=lenth){
            if(index==0){
                addAtHead(val);
            }
            else if(index==lenth){
                addAtTail(val);
            }
            else{
                int count = 0;
                Node*h = head;
                while(h!=nullptr){
                    if(count+1 == index){
                        break;
                    }
                    count+=1;
                    h=h->next;
                }
                Node*temp = h->next;
                h->next = new Node(val,temp);
            }
        }
    }
    
    void deleteAtIndex(int index) {
        int lenth = len();
        if(index>=0 && index<lenth){
            if(index==0){
                head = head->next;
            }
            else{
                int count = 0;
                Node* h = head;
                while(head!=nullptr){
                    if(count+1==index){
                        break;
                    }
                    h=h->next;
                    count++;
                }
                h->next = h->next->next;
            }
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */