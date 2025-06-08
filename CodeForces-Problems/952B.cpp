#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    for (int i = 0; i < 6; i++)
    {
        cout << i << endl;
        cin >> a;
        if (a[0] == 'w' || a[0] == 'a' || a[2] == ' ')
        {
            cout << "grumpy";
            return 0;
        }
    }
    cout << "normal";
}