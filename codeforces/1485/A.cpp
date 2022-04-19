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
        int a, b, ans = 100000;
        cin >> a >> b;

        for (int i = 0; i <= 30; i++)
        {
            if (b + i == 1)
            {
                continue;
            }
            int count = i;
            int tempo = a;
            while (tempo > 0)
            {
                tempo = tempo / (b + i);
                count++;
            }
            ans = min(ans, count);
        }
        cout << ans << endl;
    }

    return 0;
}