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

class Stack{
public:
    Node* top;
    Stack(){
        top=NULL;
    }
    void push(int elem){
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
    bool empty(){
        if (top ==NULL){
            return true;
        }
        else{
            return false;
        }
    }
};

class MyQueue {
public:
Stack* stack = new Stack();
Stack* rev_stack = new Stack();
    MyQueue() {
        
    }
    
    void push(int x) {
        if(stack->peek() == NULL){
            stack->push(x);
        }
        else{
            while(stack->peek() != NULL){
                rev_stack->push(stack->peek());
                stack->pop();
            }
            rev_stack->push(x);
            while(rev_stack->peek() != NULL){
                stack->push(rev_stack->peek());
                rev_stack->pop();
            }
        }
    }
    
    int pop() {
        int temp = stack->peek();
        stack->pop();
        return temp;
    }
    
    int peek() {
        return stack->peek();
    }
    
    bool empty() {
        if(stack->peek() == NULL){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */