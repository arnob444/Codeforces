#include <stdio.h>
int main()
{
    int a, n, i;
    scanf("%d%d", &a, &n);
    for (i = 0; i < n; i++)
    {
        if (a % 10 == 0)
        {
            a = a / 10;
        }
        else
        {
            a--;
        }
    }
    printf("%d\n", a);
}
// 512→511→510→51→50