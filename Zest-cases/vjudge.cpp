#include <bits/stdc++.h>
using namespace std;

int N, M[42], R[42], i, d;
double c;

int main()
{
    cin >> N;
    for (i = 0; i < N; i++)cin >> M[i];
    for (i = 0; i < N; i++)cin >> R[i];
    for (d = 0; d < 10000000; d++)
        for (i = 0; i < N; i++)
            if (d % M[i] == R[i])
            {
                c += 1;
                break;
            }
    cout << c / 10000000;
}