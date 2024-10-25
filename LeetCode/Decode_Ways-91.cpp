class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        if(s[0]=='0')return 0;
        if(n==1)return 1;
        int a=1,b=1;
        for(int i=1;i<n;i++){
            int x=s[i]-'0';
            int y=((s[i-1]-'0')*10)+x;
            int ans=0;
            if(x>=1)ans+=b;
            if(y>=10 && y<=26)ans+=a;
            a=b;
            b=ans;
        }
        return b;
    }
};
// DP solution
class Solution {
public:
    int numDecodings(string s) {
        int n=s.length();
        if(s[0]=='0')return 0;
        if(n==1)return 1;
        vector<int> dp(n+2,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            int x=s[i-1]-'0';
            if(x>=1)dp[i]+=dp[i-1];
            int y=((s[i-2]-'0')*10)+x;
            if(y>=10 && y<=26)dp[i]+=dp[i-2];
        }
        return dp[n];
    }
};