#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)
#define endl "\n"
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define prnt(x) cout<<x<<endl
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1) root = NULL;
    else root = new Node(val);
    queue<Node *> q;
    if (root)q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *leftNode;
        Node *rightNode;
        if (l == -1) leftNode = NULL;
        else leftNode = new Node(l);

        if (r == -1) rightNode = NULL;
        else rightNode = new Node(r);

        p->left = leftNode;
        p->right = rightNode;

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
    return root;
}

void print_right_outer_node(Node *root)
{
    if (root == NULL) return;
    cout<<root->val<<" ";
    print_right_outer_node(root->right);
    if(!root->right)print_right_outer_node(root->left);
    
}
void print_left_outer_node(Node *root)
{
    if (root == NULL) return;
    print_left_outer_node(root->left);
    if(!root->left)print_left_outer_node(root->right);
    cout<<root->val<<" ";
}
void print(Node *root){
    if (root == NULL) return;
    print_left_outer_node(root->left);
    cout<<root->val<<" ";
    print_right_outer_node(root->right);
}
int main()
{
    //freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    Node *root = input_tree();
    if(root->right==NULL){
        print_left_outer_node(root->left);
        cout<<root->val<<" ";
    }else if(root->left==NULL){
        print_right_outer_node(root);
    }else if(root->left && root->right){
        print(root);
    }
    // print_right_outer_node(root->right);
    return 0;
}