#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n], count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < 0)
            {
                arr[i] = arr[i] * (-1);
                count++;
            }
        }

        for (int i = 0; i < count; i++)
        {
            if (arr[i] > 0)
            {
                arr[i] = arr[i] * (-1);
            }
        }

        int flag = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}