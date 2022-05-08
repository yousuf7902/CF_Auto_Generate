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
            if (arr[i] == 0)
            {
                count++;
            }
        }

        sort(arr, arr + n);
        int flag = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                flag = 1;
                break;
            }
        }

        if (count == 0)
        {
            if (flag == 0)
            {
                cout << 2 + n - 1 << endl;
            }
            else
            {
                cout << 1 + n - 1 << endl;
            }
        }
        else{
            cout << n - count << endl;
        }
    }
    return 0;
}