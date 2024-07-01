#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
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

void print_linked_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_tail(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_using_pos(Node* &head, int pos) {
    
    if (pos >= size(head)) return;
    if (pos == 0) {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node* tmp = head;
    for (int i = 1; i <= pos - 1 && tmp->next != NULL; i++) tmp = tmp->next;
    if (tmp->next == NULL) return;
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    // #endif

    Node *head = NULL;
    Node *tail = NULL;
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        if (a == 1) {
            insert_tail(head, tail, b);
        } else if (a == 0) {
            Node *temp = new Node(b);
            temp->next = head;
            head = temp;
            if (tail == NULL) tail = head;
        } else if (a == 2) {
            delete_using_pos(head, b);
            if (head == NULL) tail = NULL;
        }
        print_linked_list(head);
    }
    return 0;
}
