#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    set<char> s;

    for (int i = 0;;i++){
        char c;
        cin >> c;
        s.insert(c);
        if(c=='}'){
            break;
        }
    }

    if(s.size()>3) cout << s.size()-3 << endl;
    else
        cout << s.size() - 2 << endl;

    return 0;
}