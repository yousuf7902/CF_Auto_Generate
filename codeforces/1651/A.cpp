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
        int n, ath,num;
        cin >> n;
        ath = pow(2, n);
        num = ath;

        for (int i = 1; i < n; i++)
        {
            ath = ath / 2;
        }

        for (int i = 1; i < ath;i++){
            num--;
        }
        cout << num<<endl;
    }

    return 0;
}