#include <bits/stdc++.h> 
using namespace std;
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
    int dp[text1.length()+1][text2.length()+1];
    for(int i=text1.length();i>=0;i--){
        for(int j=text2.length();j>=0;j--){
            dp[i][j]=0;
        }
    }
    for(int i=text1.length()-1;i>=0;i--){
        for(int j=text2.length()-1;j>=0;j--){
            if(text1[i]==text2[j]){
                dp[i][j]=1+dp[i+1][j+1];
            }else{
                dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    return dp[0][0];
}
};