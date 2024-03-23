#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int nn=text.length();
        int b=0,a=0,n=0,l=0,o=0;
        for(int i=0;i<nn;i++){
            if(text[i]=='b')b++;
            else if(text[i]=='a')a++;
            else if(text[i]=='n')n++;
            else if(text[i]=='l')l++;
            else if(text[i]=='o')o++;
        }
        return min({b,a,n,l/2,o/2});
    }
};