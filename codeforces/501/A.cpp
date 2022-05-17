#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int v, m;
    v = max((3 * b) / 10, b - ((b / 250) * d));
    m = max((3 * a) / 10, a - ((a / 250) * c));


    if (v == m)
    {
        cout << "Tie" << endl;
    }
    else if (v > m)
    {
        cout << "Vasya" << endl;
    }
    else
    {
        cout << "Misha" << endl;
    }
    return 0;
}