#include <bits/stdc++.h>
using namespace std;

class myQueue
{
public:
    list<string> l;
    void push(string s)
    {
        l.push_back(s);
    }
    void pop()
    {
        l.pop_front();
    }
    string front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> x;
        if (x == 0) {
            cin >> s;
            q.push(s);
        } else if (x == 1) {
            if (q.empty()) {
                cout << "Invalid" << endl;
            } else {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}
