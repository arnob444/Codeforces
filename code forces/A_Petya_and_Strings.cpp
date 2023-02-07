#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
        a[i] = towlower(a[i]);
        b[i] = towlower(b[i]);
    }
    if (a == b)
    {
        cout << "0" << endl;
    }
    else
    {
        for (int i = 0; i < b.length(); i++)
        {
            if (a[i] > b[i])
            {
                cout << "1" << endl;
                break;
            }
            if (a[i] < b[i])
            {
                cout << "-1" << endl;
                break;
            }
        }
    }
    return 0;
}

// else if (a.length() == b.length() && a[a.length() - 1] < b[b.length() - 1])
// {
//     cout << "-1" << endl;
// }
// else if (a.length() == b.length() && a[a.length() - 1] > b[b.length() - 1])
// {
//     cout << "1" << endl;
// }