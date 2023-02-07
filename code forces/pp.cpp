#include <iostream>
#include <string>
using namespace std;
int main()
{

    int n, i;
    int count = 0, c = 0;
    string s;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> s;
    }
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] == 'D')
        {
            count++;
        }
        else
            c++;
    }

    if (count > c)
    {
        cout << "Danik" << endl;
    }
    else if (count < c)
    {
        cout << "Anton" << endl;
    }
    else
        cout << "Friendship" << endl;

    return 0;
}