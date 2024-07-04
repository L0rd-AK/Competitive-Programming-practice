#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


void palindom(Node *&head, Node *&tail){
    Node *tmp1 = head;
    Node *tmp2 = tail;
    while (tmp2 != NULL && tmp1 != NULL)
    {
        if(tmp1->val==tmp2->val)continue;
        else{
            cout<<"NO\n";
            return;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->prev;
    }
    cout<<"YES\n";
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
int main()
{
    #ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
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
    palindom(head,tail);
   
    return 0;
}