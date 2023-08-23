#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int convert(long long n)
{

    int dec = 0, i = 0, rem;

    while (n != 0)
    {

        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}

int main()
{
    ll t, n;
    cin >> t;
    int index = 1;
    while (t--)
    {
        ll two = 2, a, b, c, d, w, x, y, z, count = 0;

        scanf("%lld.%lld.%lld.%lld", &a, &b, &c, &d);
        scanf("%lld.%lld.%lld.%lld", &w, &x, &y, &z);
        if (a == convert(w))
            count++;
        if (b == convert(x))
            count++;
        if (c == convert(y))
            count++;
        if (d == convert(z))
            count++;

        if (count == 4)
            cout << "Case " << index++ << ": Yes\n";
        else
            cout << "Case " << index++ << ": No\n";
    }
}