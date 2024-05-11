#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s[0] == 'A')
    {
        if (s[1] == 'A' or s[1] == 'B')
        {
            if (s[2] == 'A' or s[2] == 'B' or s[2] == 'C')
            {
                cout << "Yes\n";
            }else cout<<"No\n";
        }else cout<<"No\n";
    }else cout<<"No\n";
    return 0;
}
