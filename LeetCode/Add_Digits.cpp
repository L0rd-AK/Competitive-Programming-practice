#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int addDigits(int num) {
            if(num<=9)return num;
            int sum;
            do{
                sum=0;
                while(num!=0){
                    sum+=num%10;
                    num/=10;
                }
                num=sum;
            }while(num>9);
            return num;
        }
    };


class Solution {
public:
    int addDigits(int num) {
        long long sum=0;
        while(1){
            while(num){
                sum+=num%10;
                num/=10;
            }
            if(sum<=9)return sum;
            num=sum;
            sum=0;
        }
    }
};