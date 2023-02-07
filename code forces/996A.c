#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int r = n / 100;
    int lft = n % 100;

    r += lft / 20;
    lft = lft % 20;

    r += lft / 10;
    lft = lft % 10;

    r += lft / 5;
    lft = lft % 5;

    r += lft / 1;

    printf("%d\n", r);

    return 0;
}