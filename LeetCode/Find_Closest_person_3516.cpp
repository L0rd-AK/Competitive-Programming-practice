#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(z-x)==abs(z-y))return 0;
        if(abs(z-x)<abs(z-y))return 1;
        else return 2;
    }
};

class Solution {
public:
    int findClosest(int x, int y, int z) {
        return abs(x-z)==abs(y-z)?0:2-(abs(x-z)<abs(y-z));
    }
};