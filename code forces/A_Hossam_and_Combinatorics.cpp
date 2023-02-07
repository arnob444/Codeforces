#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin >> t;
    long long int ans;
    while (t--)
    {
        long long int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int mx_count = 0, mn_count = 0;
        long long int mx = *max_element((arr), (arr + n));
        long long int mn = *min_element((arr), (arr + n));

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mx)
            {
                mx_count++;
            }
            if (arr[i] == mn)
            {
                mn_count++;
            }
        }

        if (mn == mx)
        {
            ans = (mn_count * (mn_count - 1));
        }
        else
        {
            ans = 2LL * (mn_count * mx_count);
        }

        cout << ans << endl;
    }

    return 0;
}