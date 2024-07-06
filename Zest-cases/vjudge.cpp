#include <bits/stdc++.h>
#include <stdio.h>
#include <stdbool.h>
 
#define MAXN 200200
#define MAXM 200200
 
int n, m, k;
int arr[MAXN], brr[MAXN], drr[MAXM], buf[MAXN];
 
int cmp_i32(const void* pa, const void* pb) {
    return *(const int*)pa - *(const int*)pb;
}
 
void build() {
    k = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != brr[i])
            buf[k++] = brr[i];
    }
    qsort(buf, k, sizeof(*buf), cmp_i32);
}
 
bool check() {
    for (int i = 0; i < n; ++i)
        if (brr[i] == drr[m - 1])
            return true;
    return false;
}
 
bool solve() {
    if (!check()) return false;
    qsort(drr, m, sizeof(*drr), cmp_i32);
    int ib = 0, id = 0;
    while (ib < k && id < m) {
        if (buf[ib] == drr[id])
            ++ib, ++id;
        else if (buf[ib] < drr[id])
            return false;
        else ++id;
    }
    return ib == k;
}
 
int main() {
#ifndef ONLINE_JUDGE
   freopen("D:\\VS-Code\\Competitive programming practice\\input.txt", "r", stdin);
#endif
    int t; scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; ++i)
            scanf("%d", arr + i);
        for (int i = 0; i < n; ++i)
            scanf("%d", brr + i);
        scanf("%d", &m);
        for (int j = 0; j < m; ++j)
            scanf("%d", drr + j);
        build();
        if (solve()) printf("YES\n");
        else printf("NO\n");
    }
}