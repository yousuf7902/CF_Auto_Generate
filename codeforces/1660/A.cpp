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
        int a = 1, b = 2;
        long long int ans,num1,num2;
        cin >> num1 >> num2;

        if(num1==0 || (num1==0 && num2==0)){
            ans = 1;
            cout << ans << endl;
        }
        else{
            num1 = a * num1;
            num2 = b * num2;
            ans = (num1 + num2) + 1;
            cout << ans << endl;
        }
    }

    return 0;
}
