#include <bits/stdc++.h>
using namespace std;
int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int l=0,r=0,res,total=0;
    while (r<nums.size())
    {
       total+=nums[r];
       while((nums[r]*(r-l+1))>total+k){
        total-=nums[l];
        l++;
       }
       res=max(res,(r-l+1));r++;
    }
    
    return res;
}
int main() {
    #ifndef ONLINE_JUDGE
		freopen("D:\\VS-Code\\Competitive programming practice\\input.txt","r",stdin);
	#endif
	
	return 0;
}
