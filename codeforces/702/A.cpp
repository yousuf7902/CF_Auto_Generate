#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, count = 1, ans = 0;
    cin >> n;

    vector<int> arr1;

    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }

    for (int i = 0; i < n-1; i++)
    {
        if (arr1[i] < arr1[i + 1])
        {
            count++;
            ans = max(ans, count);
        }
        else
        {
            count = 1;
        }
    }
    if (ans == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}