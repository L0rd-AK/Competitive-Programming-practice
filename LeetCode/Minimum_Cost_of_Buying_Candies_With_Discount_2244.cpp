class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n=cost.size(),c=0,ans=0;
        if(n==1)return cost[0];
        for(int i=n-1;i>=0;i--){
            c++;
            if(c%3==0)continue;
            ans+=cost[i];
        }
        return ans;
    }
};