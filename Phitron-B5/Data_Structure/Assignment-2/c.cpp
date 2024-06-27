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
int size(Node *head)
{
    int size = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}
bool compare(Node *head1, Node *head2)
{
    
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    // return tmp1==tmp2;
    while (tmp1 != NULL)
    {
        if(tmp1->val == tmp2->val)
        {
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;  
            continue;
        }
        else return 0;
        
      
    }
    return 1;

}
int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

        Node *head1 = NULL;
        Node *tail1 = NULL;
        int val;
        while(1){
            cin >> val;
            if (val == -1)
                break;
            insert_at_tail(head1, tail1, val);
        }

        Node *head2 = NULL;
        Node *tail2 = NULL;
        int va1;
        while(1){
            cin >> va1;
            if (va1 == -1)
                break;
            insert_at_tail(head2, tail2, va1);
        }
        if(size(head1)!=size(head2))cout<<"NO\n";
        else if(compare(head1,head2))cout<<"YES\n";
        else cout<<"NO\n";
        
    
    return 0;
}