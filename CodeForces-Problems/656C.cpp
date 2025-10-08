#include <iostream>
#include <string>
using namespace std;
int main(){
char s;
int ans=0;
while(cin>>s){
if(s>='A'&&s<='Z'){
ans+=s-'A'+1;
}else if(s>='a'&&s<='z'){
ans-=s-'a'+1;
}
}
cout<<ans << endl;
}