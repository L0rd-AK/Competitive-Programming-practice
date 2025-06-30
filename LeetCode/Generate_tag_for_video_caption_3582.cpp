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

class Solution {
public:
    string generateTag(string caption) {
        int n = caption.size();
        string ans = "#";
        for(int i = 0 ; i < n ; i++) {
            if(caption[i] == ' ')continue;
            if(i > 0 && caption[i - 1] == ' ') caption[i] = toupper(caption[i]);
            else caption[i] = tolower(caption[i]);
            ans += caption[i]; 
        }

        if(ans.size() >= 1) ans[1] =  tolower(ans[1]);
        
        return ans.substr(0,100);
    
    }
};