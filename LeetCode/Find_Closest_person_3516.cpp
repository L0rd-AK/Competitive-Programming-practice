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