#include<stdio.h>
int main()
{
    int m, s;
    scanf("%d%d", &m, &s);
    if(s < 0)
    {
        if(m == 1)
        {
            printf("0 0\n");
        }
        else
        {
            printf("-1 -1\n");
        }
    }

    return 0;
}
// problem