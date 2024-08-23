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

int maxHeight(Node *root)
{
    if (root == NULL)
        return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}
void CurrentLevel(Node* root, int level) {
    if (root == NULL)
        return;
    if (level == 0)
        cout << root->val << " ";
    else if (level > 0) {
        CurrentLevel(root->left, level - 1);
        CurrentLevel(root->right, level - 1);
    }
}
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

void print_node(Node *root, bool &ans)
{
    if (root == NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    if(root->left!=NULL && root->right==NULL || root->left==NULL && root->right!=NULL){
        ans=false;
        return;
    }
    print_node(root->left,ans);
    print_node(root->right,ans);
}

int main()
{
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    Node *root = input_tree();
    int level;cin>>level;
    int h=maxHeight(root);
    if(h<=level)prnt("Invalid");
    else CurrentLevel(root,level);
    
    return 0;
}