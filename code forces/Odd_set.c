#include <stdio.h>
int main()
{
    int t, n, odd = 0, even = 0, x;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        odd = 0, even = 0;
        n = n * 2;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &x);
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        if (odd == even)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}