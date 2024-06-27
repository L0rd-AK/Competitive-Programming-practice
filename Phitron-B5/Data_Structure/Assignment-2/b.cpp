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
void insert_at_tail(Node *&head, Node *&tail, int val)
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
int search(Node *head, int x)
{
    int pos = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if(tmp->val == x)
        {
            return pos;
        }
        tmp = tmp->next;
        pos++;
    }
    return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    
    int t;
    cin>>t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        
        int val;
        while(1){
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head, tail, val);
        }
        int x;
        cin>>x;
        cout<<search(head,x)<<"\n";
    }
    return 0;
}