#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t,ans=0, maxi = 0;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        ans = ans + (b - a);
        maxi = max(maxi, ans);
    }
    cout << maxi << endl;
    return 0;
}