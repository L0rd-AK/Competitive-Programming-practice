#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back

class Node
{
public:
    ll data;
    Node *next;

    Node(ll data)
    {
        this->data = data;
        next = NULL;
    }
};

void Insert_at_head(Node *&head, Node *&tail, ll v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    if (head->next == NULL)
        tail = newNode;
}

void Insert_tail(Node *&head, Node *&tail, ll v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void Print(Node *head)
{
    Node *tmp = head;
    ll c = 0;
    while (tmp != NULL)
    {
        c++;
        tmp = tmp->next;
    }
    //cout << "Length of list is: " << c << endl;
    tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void Delete_Head(Node *&head)
{
    if (head == NULL)
        return;
    Node *d = head;
    head = head->next;
    delete d;
}

void DeleteTail(Node *&head, Node *&tail)
{
    if (head == tail)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node *tmp = head;
    while (tmp->next != tail)
    {
        tmp = tmp->next;
    }

    delete tail;
    tail = tmp;
    tail->next = NULL;
}

void Delete_at_Position(Node *&head, Node *&tail, int pos)
{
    Node *tmp = head;
    ll c = 0;
    while (tmp != NULL)
    {
        c++;
        tmp = tmp->next;
    }

    if (pos == 0)
    {
        Delete_Head(head);
        return;
    }
    if (pos >= c)
        return;

    else if (pos == c - 1)
    {
        DeleteTail(head, tail);
        return;
    }
    else
    {
        tmp = head;
        for (int i = 1; i < pos; i++)
        {
            tmp = tmp->next;
        }
        Node *d = tmp->next;
        tmp->next = d->next;
        if (d == tail) tail = tmp;  //=======tail updated=======
        delete d;
        return;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    Node *head = NULL;
    Node *tail = NULL;
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, v;
        cin >> x >> v;
        if (x == 0)
        {
            Insert_at_head(head, tail, v);
            if (tail == NULL) tail = head; //=======tail updated=======
        }
        else if (x == 1)
        {
            Insert_tail(head, tail, v);
        }
        else if (x == 2)
        {
            Delete_at_Position(head, tail, v);
            if (head == NULL) tail = NULL; //=======tail updated=======
        }
        Print(head);
    }
    return 0;
}
