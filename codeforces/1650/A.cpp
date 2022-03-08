#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        int flag = 0;
        string s;
        char c, check;
        cin >> s >> c;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c && i % 2 == 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}