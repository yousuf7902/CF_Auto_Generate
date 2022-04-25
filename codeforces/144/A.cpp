#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int arr[n + 1], max_height = INT_MIN, min_height = INT_MAX;

    long long int pos_max = 0, pos_min = 0, flag = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        max_height = max(max_height, arr[i]);
        min_height = min(min_height, arr[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == max_height)
        {
            if (flag == 1)
            {
                continue;
            }
            else
            {
                pos_max = i;
            }
            flag = 1;
        }
        else if (arr[i] == min_height)
        {
            pos_min = i;
        }
    }

    if (max_height == min_height)
    {
        cout << 0 << endl;
    }
    else
    {
        int a = (pos_max - 1) + (n - pos_min);
        if (pos_max > pos_min)
        {
            a--;
        }
        cout << a << endl;
    }

    return 0;
}