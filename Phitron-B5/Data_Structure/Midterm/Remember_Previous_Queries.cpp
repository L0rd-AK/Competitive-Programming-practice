#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void print_forwd(list<int> lst) {
    list<int> tmp=lst;
    cout << "L -> ";
    for(auto i:tmp)cout<<i<<" ";
    cout << endl;
}

void print_back(list<int> lst) {
    list<int> tmp=lst;
    tmp.reverse();
    cout << "R -> ";
    for(auto i:tmp)cout<<i<<" ";
    cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
   
   list<int> lst;
   int t;cin>>t;
    while(t--){
        int x,val;
        cin>>x>>val;
        if(x==0){
            lst.push_front(val);
            print_forwd(lst);
            print_back(lst);
        }else if(x==1){
            lst.push_back(val);
            print_forwd(lst);
            print_back(lst);
        }else if(x==2){
            int idx=0;
            for(auto i:lst){
                if(idx==val){
                    lst.erase(next(lst.begin(),val));
                    break;
                }
                idx++;
            }
            print_forwd(lst);
            print_back(lst);
        }
        
    }
    

    return 0;
}