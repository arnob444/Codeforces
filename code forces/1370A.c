#include <stdio.h>
int main()
{
    int a, n;
    scanf("%d", &a);
    while (a--)
    {
        scanf("%d", &n);
        printf("%d\n", n / 2);
    }

    return 0;
}