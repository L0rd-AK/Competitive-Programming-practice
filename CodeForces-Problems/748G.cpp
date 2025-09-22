#include <iostream>
int a, b, j;
char c;
using namespace std;
main()
{
    for (cin >> a; cin >> c;)
        cin >> b, c == '+' ? a += b : a -= b;
    for (auto i : to_string(a))
    {
        for (j = 0; j < i; j++)
            cout << "+";
        cout << ".>\n";
    }
}
