#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long n, m, a,ans;
    cin >> n >> m >> a;

    ans=((m + a - 1) / a) * ((n + a - 1) / a);
    cout << ans << endl;

    return 0;
}