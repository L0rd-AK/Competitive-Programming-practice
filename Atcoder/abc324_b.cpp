#include <bits/stdc++.h>
using namespace std;

int main() {
//   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  long long int N;
    cin >> N;

    int n = N;
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;

    if (n == 1) cout << "Yes\n";
    else cout << "No\n";

  return 0;
}
