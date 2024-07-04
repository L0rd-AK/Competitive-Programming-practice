#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size(Node *head) {
    int size = 0;
    Node *tmp = head;
    while (tmp != NULL) {
        size++;
        tmp = tmp->next;
    }
    return size;
}

void print_forwd(Node *head) {
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_back(Node *tail) {
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void insert_head(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_position(Node *&head, Node *&tail, int pos, int val) {
    if (pos > size(head)) {
        cout << "Invalid\n";
        return;
    }
    if (pos == 0) {
        insert_head(head, tail, val);
        return;
    }
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    if (tmp->next != NULL) {
        tmp->next->prev = newNode;
    }
    tmp->next = newNode;
    newNode->prev = tmp;
    if (newNode->next == NULL) {
        tail = newNode;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    Node *head = NULL;
    Node *tail = NULL;
    int idx, val;
    int t;
    cin >> t;
    while (t--) {
        cin >> idx >> val;
        if (idx > size(head)) {
            cout << "Invalid\n";
        } else {
            insert_at_position(head, tail, idx, val);
            print_forwd(head);
            print_back(tail);
        }
    }
    
    return 0;
}
