#include <bits/stdc++.h>
using namespace std;

int main() {
    const int N = 100000 + 7;
    char str[N];

    while (cin.getline(str, N)) {
        char s[N];
        int len = strlen(str);
        int j = 0;
        for (int i = 0; i<len; i++) {
            if (str[i] != ' ') s[j++]=str[i];
        }
        sort(s,s+j);
        for (int i = 0; i<j; i++) cout<<s[i];
        cout<<endl;
    }

    return 0;
}
