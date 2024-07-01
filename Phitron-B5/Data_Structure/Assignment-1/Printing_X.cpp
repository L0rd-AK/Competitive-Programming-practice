#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char>> c(n, vector<char>(n, ' '));
    for (int i=0;i<n;i++) {
        c[i][i]='\\';           
        c[i][n-i-1]='/';       
    }
   c[n/2][n/2]='X';
    for (int i=0;i<n;i++){
        for (int j=0;j<n; j++) {
            cout<<c[i][j];
        }
        cout<<endl;
    }

    return 0;
}
