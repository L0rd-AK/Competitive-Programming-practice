#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*head=NULL;

typedef struct Node node;
// =============================================
void at_first(){
    cout<<"Entering at First: "<<endl;
    node *temp=(node *)malloc(sizeof(node));
    int data;
    cout<<"Enter Data: ";
    cin>>data;
    temp->data=data;
    temp->next=head;
    head=temp;
    cout<<endl;
}
// ================================================
void at_last(node *p){
    if(head==NULL){
        at_first();
        return;
    }
    cout<<"Entering at Last: "<<endl;
    node *temp=(node *)malloc(sizeof(node));
    int data;
    cout<<"Enter Data: ";
    cin>>data;
    temp->data=data;
    temp->next=NULL;

    while(p->next!=NULL) p=p->next;
    
    p->next=temp;
    cout<<endl;
}
// ===========================================
void printList(node *p){
    cout<<"LInk-List: ";
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}
// ===========================================
void insert_at_any_pos(node *p){
    cout<<"Inserting at any position ";
    if(head==NULL){at_first();return;}
    int key;
    cout<<"Enter the value you want to insert after: ";
    cin>>key;
    while(p->next!=NULL and p->data!=key){
        p=p->next;
    }
    node *temp=(node *)malloc(sizeof(node));
    int data;
    cout<<"Enter Data: ";
    cin>>data;
    temp->data=data;
    temp->next=p->next;
    p->next=temp;
}
// ===========================================
void del_at_first(){
    if(head==NULL){
        cout<<"There's no Node to delete!!!\n";
        return;
    }
    cout<<"Deleting first node....\n";
    node *temp=head;
    head=temp->next;
}
// ==============================================
void del_at_last(){
    if(head==NULL){
        cout<<"There's no Node to delete!!!\n";
        return;
    }
    node *p=head;
    node *temp=(node *)malloc(sizeof(node));
    while(p->next!=NULL){
        temp=p;
        p=p->next;
    }
    temp->next=NULL;
}
// ===================================
void sort(node *p){
    cout<<"Entering a node: "<<endl;
     if(head==NULL){
        node *temp=(node *)malloc(sizeof(node));
        int data;
        cout<<"Enter Data: ";
        cin>>data;
        temp->data=data;
        temp->next=head;
        head=temp;
        return;
    }
    
    node *temp=(node *)malloc(sizeof(node));
    int data;
    cout<<"Enter Data: ";
    cin>>data;
    while(p->next!=NULL){
        if(p->data > data){
            temp->data=data;
            temp->next=p;
            if(temp==head){
                head=temp;
            }
        }else if(p->data < data){
            temp->data=data;
            p->next=temp;
        }
    }

}
int main(){
    // at_first();
    // printList(head);
    // at_last(head);
    // printList(head);
    // at_first();
    // printList(head);
    // at_last(head);
    // printList(head);
    // del_at_last();
    // del_at_last();
    // printList(head);
    // insert_at_any_pos(head);
    sort(head);   
    sort(head);   
    sort(head);   
    sort(head);   
    sort(head);   
    sort(head);   
    sort(head);   
    printList(head);
}