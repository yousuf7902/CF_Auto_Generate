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
        long long int n, minNum, maxNum;
        cin >> n;

        if (n % 2 != 0 || n<4)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            if(n%6==0){
                minNum = n / 6;
            }
            else{
                minNum = (n / 6) + 1;
            }
            maxNum = n / 4;
        }
        cout << minNum << " " << maxNum << endl;
    }
    return 0;
}