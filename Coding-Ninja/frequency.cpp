#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
vector<int> getFrequencies(vector<int> &v) {
  map<int, int> mpp;
  for (int i = 0; i < v.size(); i++)
    mpp[v[i]]++;

  int mx = INT_MIN;
  int mx_idx = 0;
  int mn_idx = 0;
  int mn = INT_MAX;

  for (auto i : mpp) {
    if (i.second > mx) {
      mx = i.second;
      mx_idx = i.first;
    }

    if (i.second < mn) {
      mn = i.second;
      mn_idx = i.first;
    }
  }

  return {mx_idx, mn_idx};
}

int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++)cin>>v[i];
    vector<int> ans=getFrequencies(v);
    for(auto i:ans)cout<<i<<" ";
}
