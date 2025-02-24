#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned int uint;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
    
    int t;
    cin >> t;
    while(t--){
        uint l, r;
        cin >> l >> r;
        uint count = r - l + 1;
        uint window = (count < 128 ? count : 128);
        uint start = (count < 128 ? l : (r - window + 1));
        
        ll bestVal = -1;
        uint bestA = 0, bestB = 0, bestC = 0;
        
        for (uint a = start; a <= r; a++){
            for (uint b = a + 1; b <= r; b++){
                for (uint c = b + 1; c <= r; c++){
                    ll cur = ((ll)a ^ b) + ((ll)a ^ c) + ((ll)b ^ c);
                    if(cur > bestVal){
                        bestVal = cur;
                        bestA = a; bestB = b; bestC = c;
                    }
                }
            }
        }
        cout << bestA << " " << bestB << " " << bestC << "\n";
    }
    
    return 0;
}
