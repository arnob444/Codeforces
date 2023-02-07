#include <stdio.h>
int main()
{
    int t;
    long long n, k;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%lld%lld", &n, &k);

        printf("%d\n", k + ((k - 1) / (n - 1)));
    }
    return 0;
}