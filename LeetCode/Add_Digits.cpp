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