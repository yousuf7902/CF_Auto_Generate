#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            ans = ans | x;
        }
        cout << ans << endl;
    }

    return 0;
}