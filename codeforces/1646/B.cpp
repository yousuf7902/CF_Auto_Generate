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
        int long long sum_b = 0, sum_r = 0;
        int n;
        cin >> n;

        int long long arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        sum_b = arr[0];
        sum_r = 0;
        bool ans;
        for (int i = 1, j = n - 1; i<j; i++, j--)
        {
            sum_b = sum_b + arr[i];
            sum_r = sum_r + arr[j];
            if (sum_r > sum_b)
            {
                ans = true;
                break;
            }
            else{
                ans = false;
            }
        }
        if(ans){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}