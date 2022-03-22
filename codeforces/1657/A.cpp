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
        int x, y;
        cin >> x >> y;

        if(x==0 && y==0){
            cout << 0 << endl;
        }
        else{
            int a = sqrt(x * x + y * y);
            int b = x * x + y * y;

            if(int(a*a)==b){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
    }

    return 0;
}