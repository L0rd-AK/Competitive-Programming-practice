#include <bits/stdc++.h>
using namespace std;
#define ll long long int;
long long int divisor(long long int n){
	long long int temp,c=0;
	for(int i=1;i*i<=n;i++){
		if(n%i==0) c+=2;
		temp=i;
		if(temp*temp==n) c--;
	}
	return c;
}
	
int main(){
	int t;
	cin>>t;
	while(t--){	long long int a,b,div=-1,num;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			long long int temp=divisor(i);
			if(div<temp){
				div=temp;
				num=i;
			}
		}
      printf("Between %lld and %lld, %d has a maximum of %d divisors.\n",a,b,num,div);
	}
	
	return 0;
}
