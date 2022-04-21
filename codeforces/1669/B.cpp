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
        int n, count = 1, ans, flag = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                count++;
                if(count>=3){
                    ans=arr[i];
                    flag = 1;
                }
            }
            else{
                count = 1;
            }
        }  
        if(flag==1){
            cout << ans << endl;
        }  
        else{
            cout << -1 << endl;
        }
    }

    return 0;
}
