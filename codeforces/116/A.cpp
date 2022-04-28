#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int n, maxNum = 0;
    cin >> n;
 
    int a[n + 1], b[n + 1];
 
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum =sum+(b[i]-a[i]);
        maxNum = max(maxNum, sum);
    }

    cout << maxNum << endl;

    return 0;
}