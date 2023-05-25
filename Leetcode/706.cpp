#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
class Node
{
public:
    int key;
    int value;
    Node *next;
    Node(int Key,int Value, Node *Next)
    {
        key = Key;
        value = Value;
        next = Next;
    }
};
class MyHashMap {
public:
    Node* head=new Node(-1,-1,nullptr);
    MyHashMap() {
    }
    
    void put(int key, int value) {
        Node* h = head;
        if (h->key==-1 || h==nullptr){
            head->key = key;
            head->value = value;
        }
        else{
            if(this->get(key)!=-1){
                while (h!=nullptr){
                    if (h->key == key){
                        break;
                    }
                    h=h->next;
                }
                h->value = value;
            }
            else{
                while(h->next!=nullptr){
                    h=h->next;
                }
                h->next = new Node(key,value,nullptr);
            }
        }
    }
    
    int get(int key) {
        Node* h = head;
        while (h!=nullptr){
            if (h->key == key){
                return h->value;
            }
            h=h->next;
        }
        return -1;
    }
    
    void remove(int key) {
        Node*h = head;
        if(h->key==key){
            head = head->next;
            if(head == nullptr){
                head = new Node(-1,-1,nullptr);
            }
        }
        else{
            if(this->get(key)!=-1){
                while(h->next!=nullptr){
                    if(h->next->key == key){
                        break;
                    }
                    h=h->next;
                }
                h->next = h->next->next;
            }
        }
    }
};

