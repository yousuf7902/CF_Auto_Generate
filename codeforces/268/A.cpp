#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
 
    int h[n + 1], a[n + 1];
 
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i] >> a[i];
    }
    int count = 0;
    for (int i = 1; i <= n ; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (h[i] == a[j])
                count++;
        }
    }
    cout << count << endl;
    return 0;
}
