#include <bits/stdc++.h>
using namespace std;
    bool isPalindrome(string s) {
        int n=s.size();
        for(int i=0,j=n-1;i<n;){
            if(i>=j) return true;

            if(s[i]>='a' and s[i]<='z' or s[i]>='A' and s[i]<='Z' or s[i]>='0' and s[i]<='9' && s[j]>='a' and s[j]<='z' or s[j]>='A' and s[j]<='Z' or s[j]>='0' and s[j]<='9'){
                if(tolower(s[i])!=tolower(s[j])) return false;
                else{
                    i++,j--;
                    continue;
                }
            }else{
                if((s[i]<='a' and s[i]>='z' or s[i]<='A' and s[i]>='Z' or s[i]<='0' and s[i]>='9')){
                    i++;
                }
                if((s[j]<='a' and s[j]>='z' or s[j]<='A' and s[j]>='Z' or s[j]<='0' and s[j]>='9')){
                    j--;
                }
            }
        }
    }

int main() {
    #ifndef ONLINE_JUDGE
		//freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
    cout<<isPalindrome("A man, a plan, a canal: Panama");
    return 0;
}