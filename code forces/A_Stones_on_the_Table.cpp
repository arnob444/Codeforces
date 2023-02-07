#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    string s;

    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[i] == 'R' && s[i + 1] == 'R')
        {
            count++;
        }
        else if (s[i] == 'G' && s[i + 1] == 'G')
        {
            count++;
        }
        else if (s[i] == 'B' && s[i + 1] == 'B')
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}