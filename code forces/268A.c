#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    int ar1[n], ar2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar1[i]);
        scanf("%d", &ar2[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ar1[i] == ar2[j])
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    
    return 0;
}