class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n=a.size();
        if(n<=1) return 0;
        int ans=0,buy=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<a[i-1]){
                ans+=a[i-1]-buy;
                buy=a[i];
            }
        }
        ans+=a[n-1]-buy;

        return ans;
        
    }
};