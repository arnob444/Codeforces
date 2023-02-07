#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, n, w;
    int sum = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        sum += (k * i);
    }
    
    int result = sum - n;

    if (result < 0)
    {
        result = 0;
    }
    cout << result << endl;

    return 0;
}

// 3 6 9 12 = 30
// The first line contains three positive integers k, n, w.
// The cost of the first banana.
// initial number of dollars the soldier has.
// number of bananas he wants.
