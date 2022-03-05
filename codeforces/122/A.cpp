#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, fixed = 47;
    cin >> n;

    if (n / 10== 47)
    {
        cout << "YES" << endl;
    }
    else if (n % (fixed / 10) == 0)
    {
        cout << "YES" << endl;
    }
    else if (n % (fixed % 10) == 0)
    {
        cout << "YES" << endl;
    }
    else if(n%fixed==0){
        cout << "YES" << endl; 
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}