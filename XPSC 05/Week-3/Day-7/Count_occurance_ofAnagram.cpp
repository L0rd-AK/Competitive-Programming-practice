#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int search(string pat, string txt) {
	     // code here
        
        int k = pat.size();
        int n = txt.size();
        vector<int>pat1(26,0),txt1(26,0);
        
        for(auto it : pat)
        {
            pat1[it-'a']++;
        }
        int j =0, cnt =0;
        
        for(int i=0;i<n;i++)
        {
           txt1[txt[i]-'a']++;
           
           while(i-j+1>k)
           {
               txt1[txt[j]-'a']--;
               j++;
           }
           if(pat1 == txt1)
           cnt++;
        }
        return cnt;
	}

};