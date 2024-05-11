#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int Boundary(char a[10][10], int m, int n)
{
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 || j == 0 || i == m - 1|| j == n - 1)
				cout << a[i][j] << " ";	
		}
		
	}
}
int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  int t;
  cin>>t;
  char c[12][12];
  while(t--){
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            cin>>c[i][j];
    
    int one=0,two=0,three=0,four=0,five=0;
    for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0 || j == 0 || i == 10 - 1|| j == 10 - 1)
				if(c[i][j]=='X')one++;	
		}
		
	}
    for (int i = 1; i < 9; i++) {
		for (int j = 1; j < 9; j++) {
			if (i == 1 || j == 1 || i == 9 - 1|| j == 9 - 1)
				if(c[i][j]=='X')two++;	
		}
		
	}
    for (int i = 2; i < 8; i++) {
		for (int j = 2; j < 8; j++) {
			if (i == 2 || j == 2 || i == 8 - 1|| j == 8 - 1)
				if(c[i][j]=='X')three++;	
		}
		
	}
    for (int i = 3; i < 7; i++) {
		for (int j = 3; j < 7; j++) {
			if (i == 3 || j == 3 || i == 7 - 1|| j == 7 - 1)
				if(c[i][j]=='X')four++;	
		}
		
	}
    for (int i = 4; i < 6; i++) {
		for (int j = 4; j < 6; j++) {
			if (i == 4 || j == 4 || i == 6 - 1|| j == 6 - 1)
				if(c[i][j]=='X')five++;	
		}
		
	}

    cout<<(one*1)+(two*2)+(three*3)+(four*4)+(five*5)<<endl;
    
  }
  
    
  return 0;
}
