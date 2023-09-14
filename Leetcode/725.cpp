#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* h = head;
        while (h!= nullptr){
            n++;
            h= h->next;
        }
        vector<ListNode*> array(k);
        if (n<k){
            h = head;
            int i = 0;
            while (h!= nullptr){
                ListNode* temp = h->next;
                h->next = nullptr;
                array[i] = h;
                i++;
                h = temp;
            }
        } else{
            h = head;
            vector<int> temp_array(k,0);
            int x = n;
            int i = 0;
            while (x!=0){
                temp_array[i]++;
                x--;
                i = (i+1)%k;
            }
            for (int j = 0 ; j < temp_array.size(); j++){
                x = temp_array[j];
                ListNode* temp = h;
                while (x != 1){
                    h = h->next;
                    x--;
                }
                ListNode* temp2 = h->next;
                h->next = nullptr;
                h = temp2;
                array[j] = temp;
            }
        }
        return array;
    }
};


















