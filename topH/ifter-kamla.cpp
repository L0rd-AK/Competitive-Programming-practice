#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,x,n) for(int i=x;i<n;i++)
#define fb(i,x,n) for(int i=n;i>=0;i--)

int main(){
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
    //freopen("D:\\VS-Code\\Competitive programming practice\\output.txt","w",stdout);
    ll capacity=0,n;
    cin>>n>>capacity;
    double w[n],t[n];
    for(int i=0;i<n;i++)cin>>w[i]>>t[i];
    // for(int i=0;i<n;i++)cout<<w[i]<<" "<<t[i]<<"\n";
    double final[n];
    for(int i=0;i<n;i++){
        final[i]=t[i]/w[i];
    }
    double totalTeast=0;
    while(capacity!=0){
        double maxTaste=-69;int maxIndex;
        for(int i=0;i<n;i++){
            if(maxTaste<final[i]){
                maxTaste=final[i];
                maxIndex=i;
            }
        }
        // cout<<maxIndex<<" ";
        double weight=w[maxIndex];
        while(1){
            if( weight==0) break;
            if(weight<=capacity){
                capacity-=weight;
                totalTeast+=weight*final[maxIndex];
                // cout<<totalTeast<<" "<<weight<<" "<<final[maxIndex]<<'\n';
                // maxTaste=-69;
                final[maxIndex]=0;
                // maxIndex=-1;
                break;
            }else weight--;
        }
        // for(int i=0;i<n;i++) cout<<final[i]<<" ";cout<<'\n';
    
        // cout<<maxTeast<<" ";
        // cout<<t[maxIndex]<<" ";
        // cout<<weight<<" ";
    }
    printf("%.10lf\n",totalTeast);
    return 0;
}