#include<bits/stdc++.h>
using namespace std;
int f(int i,int j,string& s, string& t, vector<vector<int>>& dp){
	if(i<0 or j<0) return 0;
	if(dp[i][j]!=-1) return dp[i][j];
	if(s[i]==t[j]){
		return dp[i][j]=1+f(i-1,j-1,s,t,dp);
	}
	return dp[i][j]=max(f(i,j-1,s,t,dp),f(i-1,j,s,t,dp));
}
int lcs(string s, string t)
{
	int n=s.length();
	int m=t.length();
	vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
	return f(n-1,m-1,s,t,dp);
}