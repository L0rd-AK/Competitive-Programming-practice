#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string generateTag(string caption) {
        string ans="#";
        int n=caption.length(),c=0,i=0;
        while(n>0 && caption[n-1]==' ')n--;
        if(n==0)return ans;
        while(caption[i]==' ')i++;
        ans+=tolower(caption[i]);i++;
        for(;i<n;i++){
            if(c==98)break;
            if(caption[i]==' '){
                while(caption[i]==' ')i++;
                ans+=toupper(caption[i]);
            }else ans+=tolower(caption[i]);
            c++;
        }
        return ans;
    }
};
