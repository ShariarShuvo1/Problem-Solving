#include<iostream>
#include<vector>
#include<string>
#include<map>
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

class Queue{
public:
    Node* head;
    Node* tail;
    Queue(){
        head=NULL;
        tail=NULL;
    }
    void enqueue(int elem){
        if(head ==NULL){
            head = new Node(elem,NULL);
            tail = head;
        }
        else{
            Node* n = new Node(elem,head);
            head = n;
        }
    }
    int dequeue(){
        Node* n = head;
        int val = n->val;
        head = head->next;
        delete n;
        return val;
    }
    int peek(){
        return head->val;
    }

    bool isEmpty(){
        return head==NULL;
    }
};

class MyStack {
public:
    Queue myQ;
    MyStack() {
        Queue myQ = Queue();
    }
    
    void push(int x) {
        myQ.enqueue(x);
    }
    
    int pop() {
        return myQ.dequeue();
    }
    
    int top() {
        return myQ.peek();
    }
    
    bool empty() {
        return myQ.isEmpty();
    }
};