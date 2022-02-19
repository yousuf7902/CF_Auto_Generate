#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    n = (n + 1) / 2;

    if(k<=n){
        k = k * 2 - 1;
        cout << k;
    }
    else{
        k = (k-n)*2;
        cout << k;
    }

    return 0;
}