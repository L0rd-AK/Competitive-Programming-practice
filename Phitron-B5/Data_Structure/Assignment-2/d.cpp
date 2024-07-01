#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void remove_duplicats(Node* head)
{
    Node *cur, *prev, *temp;
    cur = head;
    while (cur != NULL && cur->next != NULL) {
        prev = cur;
        while (prev->next != NULL) {
            if (cur->val == prev->next->val) {
                temp = prev->next;
                prev->next = prev->next->next;
                delete (temp);
            }
            else prev = prev->next;
        }
        cur = cur->next;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    remove_duplicats(head);
    print_linked_list(head);
    return 0;
}