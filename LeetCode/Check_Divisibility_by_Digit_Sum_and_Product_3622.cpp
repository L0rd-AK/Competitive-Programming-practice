class Solution {
public:
    bool checkDivisibility(int n) {
        long long N=n,sum=0,product=1;
        while(N!=0){
            sum+=(N%10);
            product*=(N%10);
            N/=10;
        }
        return (n%(sum+product)==0);
    }
};