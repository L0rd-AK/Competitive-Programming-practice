#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*, Node*> mp;
        Node* tmp=head;
        while(tmp!=nullptr){
            Node* copy=new Node(tmp->val);
            mp[tmp]=copy;
            tmp=tmp->next;
        }
        tmp=head;
        while(tmp!=nullptr){
            Node* copy=mp[tmp];
            copy->next=mp[tmp->next];
            copy->random=mp[tmp->random];
            tmp=tmp->next;
        }
        return mp[head];
    }
};