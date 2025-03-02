class Solution {
    public:
        int countDigits(int num) {
            int x=num,ans=0;
            while(x!=0){
                int z=x%10;
                if(num%z==0)ans++;
                x/=10;
            }
            return ans;
        }
    };