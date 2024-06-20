#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);
        int solved[n][2];
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            count1 += x;
            count2 += y;
        }
        int ans = 0;
        if (count1 >= count2)
        {
            ans += (count1 * (a < b ? a : b));
            ans += (count2 * (a > b ? a : b));
        }
        else
        {
            ans += (count2 * (a < b ? a : b));
            ans += (count1 * (a > b ? a : b));
        }
        printf("%d\n", ans);
    }
    return 1;
}
