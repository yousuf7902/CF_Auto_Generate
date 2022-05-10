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
        int n, m, ans = INT_MAX;
        cin >> n >> m;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int asci = 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                asci = 0;
                string s1 = arr[i];
                string s2 = arr[j];

                for (int k = 0; k < m;k++){
                    asci = asci + abs(((int)s1[k]-(int)s2[k]));
                }
                ans = min(ans, asci);
            }
            
        }
        cout << ans << endl;
    }
    return 0;
}