#include <stdio.h>
int main()
{
    int t, i;
    char n[7];
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s", &n[i]);

            if (n[0] + n[1] + n[2] == n[3] + n[4] + n[5])
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
    }
    return 0;
}