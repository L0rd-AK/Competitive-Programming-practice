#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*head;
typedef struct Node node;
// print link-list
void printNode(node *p){
    while(p!=NULL){
        cout<< p->data <<" ";
        p=p->next;
    }cout<<endl;
}
// search data
int SearchData(int key,node *p){
    int c=0;
    while(p!=NULL){
        c++;
        if(p->data==key) return c;
        p=p->next;
    }
}
// insert a node
void insert(int pos, int value, node *p){
    node *temp=(node *)malloc(sizeof(node));
    if(pos==0){
        temp->data=value;
        temp->next=head;
        head=temp;
    }else{
        for(int i=0;i<pos-1;i++) p=p->next;
        temp->data=value;
        temp->next=p->next;
        p->next=temp;
    }
    
}
// delete a node
void Delet(int pos,node *p){
    node *temp=(node *)malloc(sizeof(node));
    if(pos==1){
        head=p->next;
        return;
    }
    for(int i=0;i<pos-1;i++){ 
        temp=p;
        p=p->next;
    }
    temp->next=p->next;
    p->next=NULL;
}

// main function
int main(){
   //freopen("input.txt","r",stdin);
   int n;
   cin>>n; int a[n]; 
   for(int i=0;i<n;i++) cin>>a[i];
   node *firstNode;
   firstNode=(node *)malloc(sizeof(node));
   firstNode->data=a[0];
   firstNode->next=NULL; 
   head=firstNode;
   for(int i=1;i<n;i++){
        node *temp=(node *)malloc(sizeof(node));
        temp->data=a[i];
        temp->next=NULL;
        firstNode->next=temp;
        firstNode=temp;
   }
   printNode(head);
   
   int at;
    cout<<"Enter the value you want to insert after: ";
   cin>>at;
   int pos=SearchData(at,head);
//    cout<<pos<<endl;
cout<<"Enter new data: ";
   cin>>at;
   insert(pos,at,head);
   printNode(head);
//    pos=SearchData(4,head);
//    insert(pos,3,head);
//    printNode(head);
//    pos=SearchData(8,head);
//    insert(pos,9,head);
//    printNode(head);
   cout<<"Enter the value you want to delet: ";
   cin>>at;
   pos=SearchData(at,head);
   if(pos==0){
    cout<<"Item not found!!!"<<endl;
    return 0;
   }
   Delet(pos,head); 
   printNode(head);
    return 0;
}