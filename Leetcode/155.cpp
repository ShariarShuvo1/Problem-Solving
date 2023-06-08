#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;
class Node{
public:
    int val;
    Node *next;
    Node(int Val, Node *Next)
    {
        val = Val;
        next = Next;
    }
};

class Stack{
public:
    Node* top;
    Stack(){
        top=nullptr;
    }
    void push(int elem){
        top = new Node(elem,top);
    }
    void pop(){
        top = top->next;
    }
    int peek(){
        if(top==nullptr){
            return NULL;
        }
        return top->val;
    }
};

class MinStack {
public:
Stack lowestVal;
Node* head;
    MinStack() {
        head = nullptr;
    }
    
    void push(int val) {
        head = new Node(val,head);
        if(lowestVal.top==NULL || lowestVal.peek()>=val){
            lowestVal.push(val);
        }
    }
    
    void pop() {
        if(head->val==lowestVal.peek()){
            lowestVal.pop();
        }
        head = head->next;
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return lowestVal.peek();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */