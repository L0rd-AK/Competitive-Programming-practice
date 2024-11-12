#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define f(x1, y1, z1) for (int x1 = y1; x1 < z1; x1++)
#define endl "\n"
#define yn(f) f ? cout << "YES\n" : cout << "NO\n"
#define prnt(x) cout << x << endl

void AKG() {
      string a,b;cin>>a>>b;
      int size_a=0;
      for (size_a = 0; a[size_a] != '\0'; ++size_a);
      int size_b=0;
      for (size_b = 0; b[size_b] != '\0'; ++size_b);
      int x_count_a=0,x_count_b=0;
      f(i,0,size_a){
         if(a[i]=='X')x_count_a++;
      }
      f(i,0,size_b){
         if(b[i]=='X')x_count_b++;
      }
      if(a[size_a-1]==b[size_b-1] and a[size_a-1]=='L'){
         if(x_count_a>x_count_b)cout<<">\n";
         else if(x_count_a<x_count_b) cout<<"<\n";
         else cout<<"=\n";
      }
      else if(a[size_a-1]==b[size_b-1] and a[size_a-1]=='S'){
         if(x_count_a>x_count_b)cout<<"<\n";
         else if(x_count_a<x_count_b) cout<<">\n";
         else cout<<"=\n";
      }
      else if(a[size_a-1]==b[size_b-1] and a[size_a-1]=='M')cout<<"=\n";
      else if(a[size_a-1]=='L')cout<<">\n";
      else if(b[size_b-1]=='L')cout<<"<\n";
      else if(a[size_a-1]=='M')cout<<">\n";
      else if(b[size_b-1]=='M')cout<<"<\n";
      else cout<<"=\n";
}

int main() {


    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        AKG();
    }



    return 0;
}
