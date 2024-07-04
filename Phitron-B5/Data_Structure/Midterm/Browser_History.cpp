#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, string val) {
    Node *newNode = new Node(val);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

    Node *head = NULL;
    Node *tail = NULL;
    Node *curr = NULL;
    // ========== input ===========
    string s;
    while (true) {
        cin >> s;
        if (s == "end") break;
        insert_tail(head, tail, s);
    }
    // ========== t ===========
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a;
        if (a == "visit") {
            cin >> b;
            Node *tmp = head;
            bool ok=false;
            while (tmp!=NULL) {
                if (tmp->val==b) {
                    curr = tmp;
                    ok = true;
                    cout<<b<< endl;
                    break;
                }
                tmp=tmp->next;
            }
            if (!ok) {
                cout << "Not Available\n";
            }
        } else if (a=="prev") {
            if (curr!=NULL && curr->prev!=NULL) {
                curr = curr->prev;
                cout << curr->val << endl;
            } else {
                cout << "Not Available\n";
            }
        } else if(a=="next"){
            if(curr!=NULL && curr->next!=NULL){
                curr = curr->next;
                cout << curr->val << endl;
            } else {
                cout << "Not Available\n";
            }
        }
    }
    
    return 0;
}
