#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> k >> n;
        int srt = 1;
        int diff = 1;
        for (int i = 1; i <= k; i++)
        {
            cout << srt << " ";
            if (n - (srt + diff) >= (k - (i + 1)))
            {
                srt = srt + diff;
                diff++;
            }
            else
            {
                srt++;
            }
        }
        cout << "\n";
    }
    return 0;
}