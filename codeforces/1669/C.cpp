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
        int n,even=0,odd=0;
        cin >> n;

        int arr[n + 1];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i <= n; i++)
        {
            if(arr[i]%2==0)
                even++;
                if(arr[i]%2==1)
                    odd++;
        }

        if (even==n || odd==n)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool check = true;
            for (int i = 1; i <= n;i++){
                if(i+2<=n && arr[i]%2!=arr[i+2]%2){
                    check = false;
                }
            }
            if(check==true){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        
    }
    return 0;
}