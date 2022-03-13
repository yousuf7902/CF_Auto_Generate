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
        int k, count = 0;
        cin >> k;

        for (int i = 1;; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
            {
                count++;
            }

            if (count == k)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}