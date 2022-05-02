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
        string s;
        cin >> s;
        int num;
        if (s[0] == 'a')
        {
            num = s[1] - s[0];
            cout << num << endl;
        }
        else
        {
            num = (25 * (s[0] - 97)) + (s[1] - 97);
            if ((int)s[0] - 97 > (int)s[1] - 97)
            {
                num++;
            }
            cout << num << endl;
        }
    }
    return 0;
}