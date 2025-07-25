#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<long long> a(n);
    long long total_sum=0;
    for(int i=0;i<n;++i) {
        cin>>a[i];
        total_sum+=a[i];
    }
    if(total_sum%3!=0) {
        cout<<0<<endl;
        return 0;
    }
    long long part_sum=total_sum/3;
    long long current_sum=0;
    long long ways=0;
    long long count_first_part=0;
    for(int i=0;i<n-1;++i) {
        current_sum+=a[i];
        if(current_sum==2*part_sum) {
            ways+=count_first_part;
        }
        if(current_sum==part_sum) {
            count_first_part++;
        }
    }
    cout<<ways<<endl;
    return 0;
}
