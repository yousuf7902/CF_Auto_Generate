#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n;i++){
        if(k-i>0){
            k = k - i;
            continue;
        }
        cout << arr[k] << endl;
        return 0;
    }

        return 0;
}