#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    // freopen("output.txt","w",stdout);

    int l, lo;
    string s;

    while (getline(cin,s))
    {

        l = s.length();
        lo = 0;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == ' ')
            {
                for (int j = i-1; j >=lo; j--) printf("%c", s[j]);
                printf(" ");

                lo = i+1;
            }
        }
        for (int i = l - 1; i >=lo; i--)
            printf("%c", s[i]);
        printf("\n");
    }

    return 0;
}