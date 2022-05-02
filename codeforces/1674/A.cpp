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
        int x, y, a = 0, b = 0;
        cin >> x >> y;

        if (x > y)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
           if(y%x==0){
               cout << 1 << " " << y / x << endl;
           }
           else{
               cout << 0 << " " << 0 << endl;
           }
        }
    }

    return 0;
}