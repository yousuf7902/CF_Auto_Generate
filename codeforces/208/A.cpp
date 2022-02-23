#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s, check = "";
    cin >> s;
    int j;

    for (int i = 0, j = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            s[i] = ' ';
            s[i + 1] = ' ';
            s[i + 2] = ' ';
        }
    }
    cout << s << endl;
    return 0;
}