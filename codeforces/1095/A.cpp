#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string s;
    cin >> s;
    int count = 1;
    for (int i = 0; i < s.size();i+=count){
        cout << s[i];
        count++;
    }
    return 0;
}