#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, exchange=0;
    cin >> n;
    int arr[n],new_arr[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        new_arr[arr[i]] = i;
    }
    for (int i = 1;i<=n;i++){
        cout << new_arr[i] << " ";
    }
        return 0;
}