#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int n;

void PlayBoyChimp(vector<int> a,int lo,int hi,int key){
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if(a[mid]==key){ 
            if(n==0) {cout<<"X"<<" "<<"X"<<endl;return;}
            if(mid==0) cout<<"X"<<" "<<a[mid+1]<<endl;
            else if(mid==n)cout<<a[mid-1]<<" "<<"X"<<endl;
            else cout<<a[mid-1]<<" "<<a[mid+1]<<endl;
            return;
        }
        else if(a[mid]<key) lo=mid+1;
        else hi=mid-1;
    }
    
    if(hi<0 and lo<=n) { cout<<"X"<<" "<<a[lo]<<endl;
    }
    else if(lo>n) cout<<a[hi]<<" "<<"X"<<endl;
    else if(hi>=0 and lo<=n) cout<<a[hi]<<" "<<a[lo]<<endl;
    else cout<<"X"<<" "<<"X"<<endl;
    
     
}

int main() 
{
  freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
  cin>>n;
  vector<int> g;   
  int x,temp=-1;
  for(int i=0;i<n;i++){
    cin>>x;
    if(x!=temp){g.push_back(x);temp=x;}
  }
  n=g.size()-1;
   //for(int i=0;i<g.size();i++)cout<<g[i]<<endl;
  int m;
  cin>>m;
  int c[m];
  for(int i=0;i<m;i++)cin>>c[i];
  
  for(int i=0;i<m;i++){
    PlayBoyChimp(g,0,n,c[i]);
  }
    
  return 0;
}
