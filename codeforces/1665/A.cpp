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
        int n, a, b, c, d;
        cin >> n;
        b = 1;
        c = 1;
        d = 1;
        a = n - (b + c + d);

        cout << a << " " << b << " " << c << " " << d << endl;
    }
    return 0;
}