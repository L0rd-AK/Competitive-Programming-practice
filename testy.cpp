#include <stdio.h>
int n, a[12], i, m = 99;
int main()
{
    for (scanf("%d", &n); i < n; ++i)
        scanf("%d", a + i), m = (m < a[i] ? m : a[i]);
    printf("%d", (m ^ a[2]) + 2);
}