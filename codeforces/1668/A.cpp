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
        long long int n, m, ans;
        cin >> n >> m;

        if ((n == 1 && m > n + 1) || (m == 1 && n > m + 1))
        {
            cout << -1 << endl;
            continue;
        }
        if (n == 1 && m == 1)
        {
            cout << 0 << endl;
            continue;
        }
        long long int x = min(n, m), y = min(n, m);
        ans = 2 * (x - 1);
        if ((max(n, m) - x) % 2 == 0)
        {
            ans = ans + ((max(n, m) - x) * 2);
        }
        else
        {
            ans = ans + (max(n, m) - x) * 2 - 1;
        }
        cout << ans << endl;
    }

    return 0;
}