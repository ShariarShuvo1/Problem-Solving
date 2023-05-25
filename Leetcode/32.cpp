#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Node{
public:
    char val;
    Node *next;
    Node(char Val, Node *Next)
    {
        val = Val;
        next = Next;
    }
};

class Stack{
public:
    Node* top;
    Stack(){
        top=NULL;
    }
    void push(char elem){
        top = new Node(elem,top);
    }
    int pop(){
        int temp = top->val;
        top = top->next;
        return temp;
    }
    int peek(){
        if (top==NULL){
            return NULL;
        }
        else{
            return top->val;
        }
    }
};

class Solution {
public:
    int longestValidParentheses(string s) {
        
    }
};