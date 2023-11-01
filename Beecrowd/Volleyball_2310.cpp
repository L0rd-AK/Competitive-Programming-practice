#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;cin.ignore();
    string s;double a,b,c,x,y,z,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;
    while(t--)
    {
        cin>>s;
        cin>>a>>b>>c;
        cin>>x>>y>>z;
        sum1+=a;sum2+=b;sum3+=c;sum4+=x;sum5+=y;sum6+=z;
    }

    printf("Pontos de Saque: %.2f",(sum4*100)/sum1);
     cout<<" %.\n";
    printf("Pontos de Bloqueio: %.2f",(sum5*100)/sum2);
     cout<<" %.\n";
    printf("Pontos de Ataque: %.2f",(sum6*100)/sum3);
     cout<<" %.\n";
}