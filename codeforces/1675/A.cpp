#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        if (x - a > 0)
        {
            c = c - (x - a);
        }

        if (y - b > 0)
        {
            c = c - (y - b);
        }

        if (c >= 0)
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