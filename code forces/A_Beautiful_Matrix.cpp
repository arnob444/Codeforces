#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, a, b;
    int arr[5][5];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if(arr[i][j] == 1)
            {
                cout << abs(2 - i) + abs(2 - j) << endl;
            }
        }
    }

}