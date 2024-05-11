#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define f1(x1, y1, z1) for (int x1 = y1; x1 <= z1; x1++)

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif

   int t;
   cin >> t;
   
   while (t--)
   {
      int n;
      cin >> n;
      bool flag = true;
      char c[2 * n][2 * n];
      if (n % 2 == 0)
      {
         for (int i = 0; i < 2 * n; i += 2)
         {
            for (int j = 0; j < 2 * n; j += 2)
            {
               if (flag)
               {
                  c[i][j] = '#';
                  c[i][j + 1] = '#';
                  c[i + 1][j + 1] = '#';
                  c[i + 1][j] = '#';
                  flag = false;
               }
               else
               {
                  c[i][j] = '.';
                  c[i][j + 1] = '.';
                  c[i + 1][j + 1] = '.';
                  c[i + 1][j] = '.';
                  flag = true;
               }
            }
            if (flag)
               flag = false;
            else
               flag = true;
         }
      }
      else
      {
         for (int i = 0; i < 2 * n; i += 2)
         {
            for (int j = 0; j < 2 * n; j += 2)
            {
               if (flag)
               {
                  c[i][j] = '#';
                  c[i][j + 1] = '#';
                  c[i + 1][j + 1] = '#';
                  c[i + 1][j] = '#';
                  flag = false;
               }
               else
               {
                  c[i][j] = '.';
                  c[i][j + 1] = '.';
                  c[i + 1][j + 1] = '.';
                  c[i + 1][j] = '.';
                  flag = true;
               }
            }
         }
      }
      f(i, 0, 2 * n)
      {
         f(j, 0, 2 * n)
         {
            cout << c[i][j];
         }
         cout << endl;
      }
   }

   return 0;
}