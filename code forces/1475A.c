#include <stdio.h>
int main()
{
    long long int  n, x;
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld", &n);

        if ((n & (n - 1)) == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}