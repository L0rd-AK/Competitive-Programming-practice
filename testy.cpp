#include "cstdio"
int t, ans, x, n[32] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 6, 4, 3, 3, 8, 3, 2, 7, 9, 5};
main()
{
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        ans = 1;
        while (n[i - 1]--)
            scanf("%d", &x), ans *= x;
        printf("%d\n", ans);
    }
}