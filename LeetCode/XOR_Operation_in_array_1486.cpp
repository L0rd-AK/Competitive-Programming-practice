class Solution {
    public:
        int xorOperation(int n, int start) {
            int cnt=0,ans=0;
            while(1){
                if(cnt==n)break;
                ans^=(start+2*cnt);
                cnt++;
            }
            return ans;
        }
    };